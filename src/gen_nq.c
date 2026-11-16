/* Straight-line functions with calls and guards (batch gen_nq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o118_int { char p[0x118]; int v; };
struct o14_float { char p[0x14]; float v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_short { char p[0x24]; short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3770_int { char p[0x3770]; int v; };
struct o37A4_float { char p[0x37A4]; float v; };
struct o37C8_float { char p[0x37C8]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_ushort { char p[0x41C]; unsigned short v; };
struct o426_ushort { char p[0x426]; unsigned short v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c03f444(int, int, int);
int FUN_0c05258e(int, int, int, int, int);
int FUN_0c059dae(int, int);
int FUN_0c059e60(int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c073566(int, int);
int FUN_0c07d030(int, int);
int FUN_0c07db58(int, int, int);
int FUN_0c07e420(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c0c2ab6(int, int, int, int);
int FUN_0c0c2ce4(int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0cb448(int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c1287a8(int, int);
int FUN_0c14f238(int, int, int, int);
int FUN_0c187798(int);
int math_vec3_accumulate(int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c073270(int a4);
int FUN_0c094510(int a4);
int FUN_0c09b6b8(int a4);
int FUN_0c0a083a(int a4);
int FUN_0c0cea46(int a4, int a5, int a6, int a7);
int FUN_0c0e5fb0(int a4, int a5);

int FUN_0c073270(int a4)
{
    int stk[6];
    register int t0;
    register int t15;
    int t1;
    int t7;
    register float u8;
    register float u9;

    t0 = FUN_0c037bf6(a4);
    if (((unsigned char)t0 != 0) && (t1 = *(short *)((a4 + 0x1C)), t1 == 0)) {
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
        (((struct o5C_float *)(a4))->v) = ((((struct o37C8_float *)(a4))->v));
    }
    if ((((((struct o22_short *)(a4))->v)) == 0) && (t7 = (((struct o118_int *)(a4))->v), u8 = (((struct o0_float *)0xC07338C)->v), u9 = (((struct o8C_float *)(t7))->v), !(u8 > u9))) {
        FUN_0c0cb448(a4, 0x5, 0x0, 0x0, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24));
        (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
    }
    if (0.0f > ((((struct o50_float *)(a4))->v))) {
        t15 = FUN_0c07ecc6(a4, 0x0, 0x0);
        *(unsigned int *)(((int)stk + 12)) = t15;
        if (t15 != 0) {
            if ((*(int *)(((int)stk + 12))) != 1) {
                return FUN_0c085cac(a4, 0x6, 0x0);
            }
            *(int *)((int)stk + 8) = 0xD9;
            *(int *)((int)stk + 4) = 0x3;
            *(int *)((int)stk + 0) = 0xFFFFFFFF;
            FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xD9, 0xFFFFFFFF, 0x3, 0xD9);
            (((struct o50_float *)(a4))->v) = 0.0f;
            (((struct o5C_float *)(a4))->v) = ((((struct o14_float *)0xC07338C)->v));
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        }
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}

int FUN_0c094510(int a4)
{
    register int t0;
    register int t1;

    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    FUN_0c07d030(a4, 0x2);
    if ((*(signed char *)((a4 + 0x375A))) == 2) {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x1, 0x22, (t0), 0x1, 0x22);
        FUN_0c1287a8(a4, 0x2);
        *(unsigned short *)((a4 + 0x1C)) = 0x1A;
        t0 = 0x3;
    } else {
        t1 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t1, 0x1, 0x24, (t1), 0x1, 0x24);
        FUN_0c1287a8(a4, 0x4);
        *(unsigned short *)((a4 + 0x1C)) = 0xE;
        t0 = ((*(signed char *)((a4 + 0x17))) + 0x1);
    }
    (((struct o17_uchar *)(a4))->v) = t0;
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
    return FUN_0c059e60(a4, 0xB);
}

int FUN_0c09b6b8(int a4)
{
    int t0;
    register int t1;

    FUN_0c037bf6(a4);
    t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if ((0.0f > ((((struct o50_float *)(a4))->v))) && (t0 != 0)) {
        if (t0 == 2) {
            return FUN_0c085cac(a4, 0x6, 0x0);
        }
        FUN_0c05258e(0x2, 0x14, 0x100, 0x1E, 0x0);
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0x5, (t0), 0x2, 0x5);
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
        FUN_0c07db58(a4, (0x118 + a4), t1);
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        return 0x15;
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}


int FUN_0c0cea46(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        (((struct o50_float *)(a4))->v) = 0.0f;
        (((struct o5C_float *)(a4))->v) = -2.0f;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))), a6, a7);
    }
    t0 = FUN_0c0c2ce4(a4);
    if (t0 != 0) {
        if (t0 == 2) {
            t0 = 0x3;
            t1 = (*(signed char *)((a4 + 0x1)));
        } else {
            (((struct o426_ushort *)(a4))->v) = 0x4AF;
            t0 = 0x2;
            t1 = (*(signed char *)((a4 + 0x1)));
        }
        return FUN_0c0c2d56(a4, t0, t1);
    }
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
    return 0x50;
}

int FUN_0c0e5fb0(int a4, int a5)
{
    int stk[6];
    register int t2;
    register int t3;

    *(unsigned int *)(((int)stk + 16)) = a4;
    *(unsigned int *)(((int)stk + 20)) = a5;
    if ((*(int *)0xC540DD4) != 0) {
        t2 = FUN_0c037320(0x6, (*(int *)0xC4B410C));
        t3 = FUN_0c03f444(0x1, 0x0, t2);
        if (t3 != 0) {
            FUN_0c03733c(t3, 0x6, (*(int *)0xC4B410C));
            *(unsigned int *)((t3 + 0x4)) = 0xC0E5B60;
            *(unsigned char *)((t3 + 0x1)) = 0xFFFFFFFF;
            (((struct oAC_ushort *)(t3))->v) = 0xF;
            (((struct oA9_uchar *)(t3))->v) = 0x21;
            *(unsigned char *)((t3 + 0x2)) = (*(signed char *)(((int)stk + 20)));
            FUN_0c07e420(t3, 0x9);
            (((struct o48_float *)(t3))->v) = 1.0f;
            (((struct o44_float *)(t3))->v) = 1.0f;
            (((struct o40_float *)(t3))->v) = 1.0f;
            *(int *)((int)stk + 12) = 0xF0;
            *(int *)((int)stk + 8) = 0x0;
            *(int *)((int)stk + 4) = 0x0;
            *(int *)((int)stk + 0) = 0x100;
            FUN_0c064d24(t3, 0x3, 0x9, 0x1, 0x100, 0x0, 0x0, 0xF0);
            *(unsigned int *)((t3 + 0x10)) = (*(int *)(((int)stk + 16)));
            (((struct o41C_ushort *)(t3))->v) = ((((struct o24_short *)((*(int *)(((int)stk + 16)))))->v));
            (((struct oA4_uint *)(t3))->v) = ((*(int *)0xC540DD4) + 0x64);
            *(volatile int *)(((int)stk + 20));
            FUN_0c187798((0x41C + t3));
            return t3;
        }
        return 0x0;
    }
    return 0x0;
}
