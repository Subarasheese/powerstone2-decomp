/* Straight-line functions with calls and guards (batch gen_il): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_ushort { unsigned short v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o11_uchar { char p[0x11]; unsigned char v; };
struct o118_int { char p[0x118]; int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o2_short { char p[0x2]; short v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o3717_uchar { char p[0x3717]; unsigned char v; };
struct o3718_uchar { char p[0x3718]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3B_uchar { char p[0x3B]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o4_short { char p[0x4]; short v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C_uchar { char p[0x4C]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_short { char p[0x8]; short v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c017e48(void);
int FUN_0c017e68(void);
int FUN_0c017ed8(void);
int FUN_0c037bf6(int, int, int);
int FUN_0c0573cc(int, int, int);
int FUN_0c059ce8(int);
int FUN_0c05aab6(int, int);
int FUN_0c05add4(int);
int FUN_0c05b052(int, int);
int FUN_0c05f22c(int);
int FUN_0c07043c(int, float, float, float, float);
int FUN_0c07ce58(int, int);
int FUN_0c07d774(int);
int FUN_0c07d838(int, int, int, int);
int FUN_0c07d9dc(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ebe6(int);
int FUN_0c07f18c(int);
int FUN_0c07fea4(int, int);
int FUN_0c080320(int, float);
extern int FUN_0c085cac();
int FUN_0c0a3058(int, int, int, int);
int FUN_0c0fb9a6(void);
int FUN_0c0fd0e8(int);
int FUN_0c0fddea(int);
int FUN_0c0fe000(int);
int FUN_0c104cc8(int);
int FUN_0c105384(int, int);
int FUN_0c10de48(int);
int FUN_0c117944(int, ...);
int FUN_0c117d54(void);
int FUN_0c117e76(void);
int FUN_0c11e28e(int);
int FUN_0c12db58(int, int);
int FUN_0c12df3c(int, int);
int FUN_0c12f304(int, int, int, int);
int FUN_0c12f69c(int, int);
int FUN_0c2cfda6(void);
int FUN_0c2d0a30(void);
int FUN_0c2db8f4(int, int, int);
int FUN_0c2db908(int, int, int);
int FUN_0c2e7200(int);
int FUN_0c2e732c(void);
int FUN_0c2e76c8(int, int, int, int);
int FUN_0c2f7c34(int);
int fmMngClearBuf(int, int);
int fmMngReadSctAllData(int);
int strncpy(int, int, int);
int thunk_FUN_0c0167cc(int, int, int, int);
int thunk_FUN_0c2c2156(int, int, int);
int FUN_0c09c74c(int a4);
int FUN_0c10e716(int a4);
int FUN_0c09ef24(int a4, int a5, int a6);
int FUN_0c2f78e0(void);
int FUN_0c0fe02a(int a4, int a5, int a6, int a7);
int FUN_0c2cfbd0(int a4);
int FUN_0c0a71e2(int a4, int a5, int a6);
int FUN_0c09d38c(int a4);
int FUN_0c09d78a(int a4);
int FUN_0c069a04(int a4, int a5, int a6, int a7);
int fmMngFormat(int a4, int a5, int a6);
int FUN_0c0169cc(int a4, int a5, int a6, int a7);
int FUN_0c11f114(void);

int FUN_0c09c74c(int a4)
{
    register int t0;
    register int t1;

    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t0, 0x1, 0x16, (t0), 0x1, 0x16);
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t0))->v) = 1.0f;
    (((struct o9C_float *)(t0))->v) = 1.0f;
    (((struct oA0_float *)(t1))->v) = 1.0f;
    (((struct o9C_float *)(t1))->v) = 1.0f;
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t0))->v) = 1.0f;
    (((struct o98_float *)(t1))->v) = 1.0f;
    (((struct o94_float *)(t0))->v) = 1.0f;
    (((struct o94_float *)(t1))->v) = 1.0f;
    FUN_0c080320(a4, 1.0f);
    *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
    FUN_0c12db58(a4, 0x1);
    FUN_0c12df3c(a4, 0x0);
    FUN_0c12f69c(a4, 0x0);
    *(unsigned short *)((a4 + 0x1C)) = 0x1;
    *(unsigned short *)((a4 + 0x1E)) = 0xA;
    return 0xA;
}

int FUN_0c10e716(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        (((struct o17_uchar *)(a4))->v) = 0x0;
        t0 = 0x3;
        for (;;) {
            FUN_0c11e28e(0xB6);
            t0 = (t0 - 0x1);
            if (t0 == 0) {
                break;
            }
        }
    }
    t0 = *(signed char *)((a4 + 0x17));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            t0 = FUN_0c104cc8(0x3FCF);
            if (t0 != 0) {
                FUN_0c10de48(a4);
                return FUN_0c05b052(0x2D, 0x1);
            }
            return t0;
        }
        t0 = FUN_0c117d54();
        if ((int)t0 < 0) {
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            return FUN_0c117e76();
        }
        return t0;
    }
    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
    return (FUN_0c117944(0xE8));
}

int FUN_0c09ef24(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c037bf6(a4, a5, a6);
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 != 0) {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0xC, (t0), 0x2, 0xC);
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t0))->v) = 1.0f;
        (((struct o9C_float *)(t0))->v) = 1.0f;
        (((struct oA0_float *)(t2))->v) = 1.0f;
        (((struct o9C_float *)(t2))->v) = 1.0f;
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t0))->v) = 1.0f;
        (((struct o98_float *)(t2))->v) = 1.0f;
        (((struct o94_float *)(t0))->v) = 1.0f;
        (((struct o94_float *)(t2))->v) = 1.0f;
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
        FUN_0c07ce58(a4, ((((short)(*(signed char *)((a4 + 0x2))) * (short)0x78) + 0xC25B194) + 0x18));
        *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
        FUN_0c07043c(a4, ((((struct o8_float *)0xC09F034)->v)), ((((struct o4_float *)0xC09F034)->v)), ((((struct o0_float *)0xC09F034)->v)), 1.0f);
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t1 = 0x15;
    }
    return t1;
}


int FUN_0c0fe02a(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        FUN_0c0fddea(a4);
        FUN_0c0fd0e8(a4);
        FUN_0c0fe000(a4);
    }
    *(unsigned short *)((a4 + 0x1C)) = (FUN_0c105384((*(short *)((a4 + 0x1C))), 0x2));
    t0 = FUN_0c05f22c(0x101);
    if (t0 != 0) {
        t1 = *(short *)((a4 + 0x1C));
        if (t1 == 2) {
            FUN_0c05aab6(0x0, 0x3);
            FUN_0c05add4(0x1);
            FUN_0c059ce8(0x75);
            return FUN_0c0fb9a6();
        }
        return t1;
    }
    return t0;
}


int FUN_0c0a71e2(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;

    (((struct o374B_uchar *)(a4))->v) = 0x1;
    t0 = FUN_0c037bf6(a4, a5, a6);
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 != 0) {
        FUN_0c0a3058(a4, (*(signed char *)((a4 + 0x1))), 0x2, 0x17);
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t0))->v) = 1.0f;
        (((struct o9C_float *)(t0))->v) = 1.0f;
        (((struct oA0_float *)(t2))->v) = 1.0f;
        (((struct o9C_float *)(t2))->v) = 1.0f;
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t0))->v) = 1.0f;
        (((struct o98_float *)(t2))->v) = 1.0f;
        (((struct o94_float *)(t0))->v) = 1.0f;
        (((struct o94_float *)(t2))->v) = 1.0f;
        FUN_0c07ce58(a4, ((((short)(*(signed char *)((a4 + 0x2))) * (short)0x78) + 0xC25B194) + 0x30));
        *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
        FUN_0c07043c(a4, ((((struct o8_float *)0xC0A7338)->v)), ((((struct o4_float *)0xC0A7338)->v)), ((((struct o0_float *)0xC0A7338)->v)), 1.0f);
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t1 = 0x15;
    }
    return t1;
}

int FUN_0c09d38c(int a4)
{
    int stk[6];
    register int t1;
    register int t2;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
    *(int *)((int)stk + 8) = 0x1A;
    *(int *)((int)stk + 4) = 0x1;
    t1 = *(signed char *)((a4 + 0x1));
    *(unsigned int *)(((int)stk + 12)) = t1;
    t2 = t1;
    *(int *)((int)stk + 0) = t2;
    FUN_0c07e79c(a4, t1, 0x1, 0x1A, t2, 0x1, 0x1A);
    t4 = *(int *)(((0x118 + a4) + 0x4));
    t5 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t4))->v) = 1.0f;
    (((struct o9C_float *)(t4))->v) = 1.0f;
    (((struct oA0_float *)(t5))->v) = 1.0f;
    (((struct o9C_float *)(t5))->v) = 1.0f;
    t6 = *(int *)(((0x118 + a4) + 0x4));
    t7 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t6))->v) = 1.0f;
    (((struct o98_float *)(t7))->v) = 1.0f;
    (((struct o94_float *)(t6))->v) = 1.0f;
    (((struct o94_float *)(t7))->v) = 1.0f;
    FUN_0c12f304(a4, 0x1, t6, 0x0);
    (((struct o1B_uchar *)(a4))->v) = 0x0;
    *(unsigned short *)((a4 + 0x1C)) = 0xA;
    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
    return 0x17;
}

int FUN_0c09d78a(int a4)
{
    int stk[6];
    register int t0;
    register int t1;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    *(int *)((int)stk + 8) = 0x1B;
    *(int *)((int)stk + 4) = 0x1;
    t0 = *(signed char *)((a4 + 0x1));
    *(unsigned int *)(((int)stk + 12)) = t0;
    t1 = t0;
    *(int *)((int)stk + 0) = t1;
    FUN_0c07e79c(a4, t0, 0x1, 0x1B, t1, 0x1, 0x1B);
    t3 = *(int *)(((0x118 + a4) + 0x4));
    t4 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t3))->v) = 1.0f;
    (((struct o9C_float *)(t3))->v) = 1.0f;
    (((struct oA0_float *)(t4))->v) = 1.0f;
    (((struct o9C_float *)(t4))->v) = 1.0f;
    t5 = *(int *)(((0x118 + a4) + 0x4));
    t6 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t5))->v) = 1.0f;
    (((struct o98_float *)(t6))->v) = 1.0f;
    (((struct o94_float *)(t5))->v) = 1.0f;
    (((struct o94_float *)(t6))->v) = 1.0f;
    *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    FUN_0c12f304(a4, 0x1, 0x0, 0x0);
    (((struct o1B_uchar *)(a4))->v) = 0x0;
    *(unsigned short *)((a4 + 0x1C)) = 0xA;
    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
    return 0x17;
}

int FUN_0c069a04(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t0;
    register int t2;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        t2 = FUN_0c07ebe6(a4);
        if (t2 != 0) {
            (((struct o3717_uchar *)(a4))->v) = 0x5;
            (((struct o3718_uchar *)(a4))->v) = 0x6;
            return ((int (*)(int, int, int))(FUN_0c085cac))(a4, 0x5, 0x6);
        }
        return t2;
    }
    if ((*(signed char *)((a4 + 0x371D))) == 2) {
        (((struct o3717_uchar *)(a4))->v) = 0x0;
        (((struct o3718_uchar *)(a4))->v) = 0x0;
        return ((int (*)(int, int, int, int))(FUN_0c085cac))(a4, 0x0, 0x0, a7);
    }
    t4 = FUN_0c07f18c(a4);
    if (t4 != 0) {
        t5 = FUN_0c07fea4(a4, 0x0);
        if (t5 == 0) {
            t6 = FUN_0c07d838(a4, 0x0, 0x0, 0x0);
            if (t6 != 0) {
                return FUN_0c07d9dc(a4, t6);
            }
            return t6;
        }
        return t5;
    }
    t7 = FUN_0c07d838(a4, 0x0, 0x0, 0x0);
    if (t7 != 0) {
        return FUN_0c07d9dc(a4, t7);
    }
    return t7;
}


int FUN_0c0169cc(int a4, int a5, int a6, int a7)
{
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t0;
    int t10;
    register int t11;
    register int t12;
    register int t17;
    register int t18;
    register int t19;

    t1 = a4;
    t2 = a5;
    t3 = a6;
    t4 = 0xC304C24;
    for (;;) {
        if ((*(signed char *)((t4 + 0x0))) == 0) {
            break;
        }
        t0 = (*(signed char *)((t4 + 0x2)));
        t2 = (*(signed char *)((t4 + 0x0)));
        t1 = t0;
        t3 = (unsigned char)t2;
        t0 = t3;
        if (((t0 != 78) && (t10 = (t0 == 78), t0 = t3, t0 != 110)) || ((t11 = (t0 == 78), t0 = (unsigned char)t1, t0 == 89) || (t12 = (t0 == 78), t0 = (unsigned char)t1, t0 == 121))) {
            t17 = t1;
            t18 = t2;
            t19 = t3;
        } else {
            t0 = (*(signed char *)((t4 + 0x1)));
            t3 = 0x2;
            t0 = (unsigned char)t0;
            t0 = (t0 - 1);
            t0 = (t0 << 2);
            t2 = (*(int *)((0xC20C900 + t0)));
            t1 = t4;
            t0 = (strncpy(t1, t2, t3));
        }
        t4 = (t4 + 0x2);
        t1 = t17;
        t2 = t18;
        t3 = t19;
    }
    thunk_FUN_0c0167cc(0xC304C24, 0xC304CA4, t3, a7);
    FUN_0c017e48();
    FUN_0c017ed8();
    FUN_0c017e68();
    (((struct o4C_uchar *)((*(int *)0xC304BA0)))->v) = 0x1;
    return 0x4C;
}

