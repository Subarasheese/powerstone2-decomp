/* game/player: functions 0C0A12DC-0C0A2E52, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17C_float { char p[0x17C]; float v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3770_uint { char p[0x3770]; unsigned int v; };
struct o3830_ushort { char p[0x3830]; unsigned short v; };
struct o50_float { char p[0x50]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c070320(int);
int FUN_0c07043c(int, float, float, float, float);
int FUN_0c0705e2(int);
int FUN_0c070690(int, int, int);
int FUN_0c070980(int);
int FUN_0c07101a(int, int, int, int);
int FUN_0c071ae4(int);
int FUN_0c072bd4(int);
int FUN_0c07309e(int);
int FUN_0c07ce58(int, int);
int FUN_0c07d1fc(int);
int FUN_0c07d774(int);
int FUN_0c07da48(int);
int FUN_0c07e2f4(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c07f566(void);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int);
int FUN_0c0a18ec(int);
int FUN_0c0a19dc(int);
int FUN_0c0a2872(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0a2a28(int);
int FUN_0c133aec(int);
int FUN_0c136208(int, int, int, int, int, int);
int FUN_0c1362e4(int, int);
int math_vec3_accumulate(int, int);
int FUN_0c0a12dc(int a4);
int FUN_0c0a13c8(int a4);
int FUN_0c0a14dc(int a4);
int FUN_0c0a1546(int a4);
int FUN_0c0a16a4(int a4, int a5, int a6, int a7);
int FUN_0c0a17f4(int a4);
int FUN_0c0a196e(int a4, int a5, int a6, int a7);
int FUN_0c0a1992(int a4);
int thunk_FUN_0c0a19dc(int a4);
int FUN_0c0a1b6e(int a4, int a5, int a6, int a7);
int FUN_0c0a2752(int a4, int a5, int a6, int a7);
int FUN_0c0a27fe(int a4);
int FUN_0c0a2820(int a4, int a5, int a6, int a7);
int FUN_0c0a283c(int a4);
int FUN_0c0a2b94(int a4, int a5, int a6, int a7);
int FUN_0c0a2bc2(int a4, int a5, int a6, int a7);
int FUN_0c0a2be8(int a4, int a5, int a6, int a7);
int FUN_0c0a2bf4(int a4);
int FUN_0c0a2cd4(int a4);

int FUN_0c0a12dc(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    (((struct o374B_uchar *)(a4))->v) = 0x1;
    FUN_0c037bf6(a4);
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        FUN_0c07ce58(a4, ((((short)(*(signed char *)((a4 + 0x2))) * (short)0x78) + 0xC25B194) + 0x30));
        *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0xB, (t0), 0x2, 0xB);
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
        FUN_0c07e2f4(a4, 0x17);
        FUN_0c07043c(a4, 35.0f, -3.5f, 500.0f, 1.0f);
        *(unsigned short *)((a4 + 0x1C)) = 0x5;
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        t1 = 0x16;
    }
    return t1;
}

int FUN_0c0a13c8(int a4)
{
    register int t0;
    register int t1;

    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((int)(short)(t0 - 1) > 0) {
        (((struct o374B_uchar *)(a4))->v) = 0x1;
    }
    FUN_0c037bf6(a4);
    if (0.0f > ((((struct o17C_float *)(a4))->v))) {
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) / (1.0f + 1.0f));
    }
    if (!(((((struct o50_float *)(a4))->v)) > 0.0f)) {
        t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t0 != 0) {
            if ((*(signed char *)((a4 + 0x131))) != 0) {
                t0 = FUN_0c07d1fc(a4);
                if (t0 != 0) {
                    t0 = *(signed char *)((a4 + 0x1));
                    FUN_0c07e79c(a4, t0, 0x1, 0x7, (t0), 0x1, 0x7);
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
                    (((struct o16_uchar *)(a4))->v) = 0x3;
                    *(unsigned short *)((a4 + 0x1C)) = 0x2;
                    *(unsigned short *)((a4 + 0x1E)) = 0x0;
                    (((struct o20_ushort *)(a4))->v) = 0x0;
                    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
                }
                return FUN_0c085cac(a4, 0x6, 0x0);
            }
            return FUN_0c085cac(a4, 0x6, 0x0);
        }
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}

int FUN_0c0a14dc(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(short *)((a4 + 0x1C));
    if (((int)(short)t0 < (int)0x14) && ((short)t0 != 0)) {
        t0 = FUN_0c07d774(a4);
        t1 = *(int *)((a4 + 0x38));
        t2 = *(short *)((a4 + 0x1C));
        t3 = (unsigned short)(t0 - t1);
        if ((0x8000 & (unsigned short)(t0 - t1)) != 0) {
            t3 = ((unsigned short)(t0 - t1) | 0xFFFF0000);
        }
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + ((int)((int)t3 / (int)t2)));
    }
    if ((*(short *)((a4 + 0x1C))) != 0) {
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
    }
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t0;
}

int FUN_0c0a1546(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return FUN_0c0a19dc(a4);
            }
            return FUN_0c0a14dc(a4);
        }
        return FUN_0c0a13c8(a4);
    }
    return FUN_0c0a12dc(a4);
}

int FUN_0c0a16a4(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC0A163E))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0A158C))(a4, a5, a6, a7);
}

int FUN_0c0a17f4(int a4)
{
    register int t0;
    register int t1;

    FUN_0c037bf6(a4);
    if (!(((((struct o50_float *)(a4))->v)) > 0.0f)) {
        t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t0 != 0) {
            if ((*(signed char *)((a4 + 0x131))) != 0) {
                t0 = FUN_0c07d1fc(a4);
                if (t0 != 0) {
                    *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
                    *(unsigned short *)((a4 + 0x1C)) = 0x14;
                    *(unsigned short *)((a4 + 0x1E)) = 0x0;
                    t0 = *(signed char *)((a4 + 0x1));
                    FUN_0c07e79c(a4, t0, 0x2, 0xC, (t0), 0x2, 0xC);
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
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    return 0x15;
                }
                return FUN_0c085cac(a4, 0x6, 0x0);
            }
            return FUN_0c085cac(a4, 0x6, 0x0);
        }
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}

int FUN_0c0a196e(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return FUN_0c0a18ec(a4);
        }
        return FUN_0c0a17f4(a4);
    }
    return ((int (*)(int, int, int, int))(0xC0A16FC))(a4, a5, a6, a7);
}

int FUN_0c0a1992(int a4)
{
    register int t0;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return FUN_0c038362(a4);
}

int thunk_FUN_0c0a19dc(int a4)
{
    return FUN_0c0a19dc(a4);
}

int FUN_0c0a1b6e(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x3732));
    switch (t0) {
    case 0:
        t0 = ((int (*)(int, int, int, int))((*(int *)((((*(signed char *)((a4 + 0x3733))) << 2) + 0xC25D1EC)))))(a4, a5, a6, a7);
        FUN_0c07da48(a4);
        FUN_0c070320(a4);
        break;
    case 2:
        FUN_0c0705e2(a4);
        break;
    case 3:
        FUN_0c070690(a4, a5, a6);
        FUN_0c07da48(a4);
        FUN_0c070320(a4);
        break;
    case 4:
        FUN_0c070980(a4);
        break;
    case 5:
        FUN_0c07101a(a4, a5, a6, a7);
        break;
    case 6:
        thunk_FUN_0c0a19dc(a4);
        FUN_0c07da48(a4);
        FUN_0c070320(a4);
        break;
    case 7:
        FUN_0c0a16a4(a4, a5, a6, a7);
        break;
    case 8:
        FUN_0c0a196e(a4, a5, a6, a7);
        break;
    case 9:
        FUN_0c071ae4(a4);
        break;
    case 12:
        FUN_0c0a1546(a4);
        break;
    case 13:
        FUN_0c072bd4(a4);
        break;
    case 14:
        FUN_0c07309e(a4);
        break;
    }
    t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if (t0 == 2) {
        return FUN_0c085cac(a4, 0x6, 0x0);
    }
    return t0;
}

int FUN_0c0a2752(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x375A));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            return t0;
                        }
                        return ((int (*)(int, int, int, int))(0xC0A2726))(a4, a5, a6, a7);
                    }
                    return ((int (*)(int, int, int, int))(0xC0A2398))(a4, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC0A20EC))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC0A2726))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC0A21E4))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0A1F1A))(a4, a5, a6, a7);
}

int FUN_0c0a27fe(int a4)
{
    register int t0;
    register int t2;

    t0 = FUN_0c037bf6(a4);
    t2 = (unsigned char)t0;
    if ((unsigned char)t0 != 0) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t2 = 0x15;
    }
    return t2;
}

int FUN_0c0a2820(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c0a27fe(a4);
    }
    return ((int (*)(int, int, int, int))(0xC0A27A0))(a4, a5, a6, a7);
}

int FUN_0c0a283c(int a4)
{
    register int t0;

    t0 = FUN_0c07f566();
    if (t0 != 0) {
        return 0x1;
    }
    t0 = FUN_0c07f566();
    if (t0 != 0) {
        return 0x0;
    }
    return 0x63;
}

int FUN_0c0a2b94(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
        } else {
            FUN_0c0a2a28(a4);
        }
    } else {
        FUN_0c0a2872(a4, a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    }
    (((struct o3770_uint *)(a4))->v) = 0x0;
    return 0x3770;
}

int FUN_0c0a2bc2(int a4, int a5, int a6, int a7)
{
    *(volatile signed char *)((a4 + 0x3728));
    
    return FUN_0c0a2b94(a4, a5, a6, a7);
}

int FUN_0c0a2be8(int a4, int a5, int a6, int a7)
{
    *(volatile signed char *)((a4 + 0x3728));
    
    return ((int (*)(int, int, int, int))(0xC0A2BCE))(a4, a5, a6, a7);
}

int FUN_0c0a2bf4(int a4)
{
    int stk[6];
    register int t0;
    register int t2;
    register int t4;
    register int t5;
    register int t8;
    register int t9;
    register int t14;
    register int t15;
    register int t16;
    register int t17;
    register int t19;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        t2 = FUN_0c037bf6(a4);
        if ((unsigned char)t2 != 0) {
            return FUN_0c085d0c(a4);
        }
        return (unsigned char)t2;
    }
    if ((*(signed char *)((a4 + 0x17))) != 0) {
        *(int *)((int)stk + 8) = 0x0;
        *(int *)((int)stk + 4) = 0x6;
        t4 = *(signed char *)((a4 + 0x1));
        *(unsigned int *)(((int)stk + 12)) = t4;
        t5 = t4;
        *(int *)((int)stk + 0) = t5;
        FUN_0c07e79c(a4, t4, 0x6, 0x0, t5, 0x6, 0x0);
        FUN_0c1362e4(a4, 0x2);
    } else {
        *(int *)((int)stk + 8) = 0x1;
        *(int *)((int)stk + 4) = 0x6;
        t8 = *(signed char *)((a4 + 0x1));
        *(unsigned int *)(((int)stk + 12)) = t8;
        t9 = t8;
        *(int *)((int)stk + 0) = t9;
        FUN_0c07e79c(a4, t8, 0x6, 0x1, t9, 0x6, 0x1);
        FUN_0c136208(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4));
    }
    t14 = *(int *)(((0x118 + a4) + 0x4));
    t15 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t14))->v) = 1.0f;
    (((struct o9C_float *)(t14))->v) = 1.0f;
    (((struct oA0_float *)(t15))->v) = 1.0f;
    (((struct o9C_float *)(t15))->v) = 1.0f;
    t16 = *(int *)(((0x118 + a4) + 0x4));
    t17 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t16))->v) = 1.0f;
    (((struct o98_float *)(t17))->v) = 1.0f;
    (((struct o94_float *)(t16))->v) = 1.0f;
    (((struct o94_float *)(t17))->v) = 1.0f;
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    t19 = FUN_0c037bf6(a4);
    if ((unsigned char)t19 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t19;
}

int FUN_0c0a2cd4(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        t1 = t0;
        if (t0 == 1) {
            FUN_0c037bf6(a4);
            FUN_0c038362(a4);
            t0 = *(signed char *)((a4 + 0x17));
            t2 = t0;
            if ((t0 == 0) || (t0 == 1)) {
                t0 = 0x371A;
                if ((*(signed char *)((a4 + 0x371A))) == 0) {
                    (((struct o374B_uchar *)(a4))->v) = 0x1;
                    (((struct o3830_ushort *)(a4))->v) = 0x0;
                    t0 = 0x3830;
                }
                t2 = t0;
            }
            t1 = t2;
        }
        t0 = t1;
    } else {
        t1 = *(signed char *)((a4 + 0x17));
        switch (t1) {
        case 0:
            if ((*(signed char *)((a4 + 0x371A))) != 0) {
                t1 = *(signed char *)((a4 + 0x1));
                FUN_0c07e79c(a4, t1, 0x6, 0x9, (t1), 0x6, 0x9);
                FUN_0c133aec(a4);
            } else {
                t1 = *(signed char *)((a4 + 0x1));
                FUN_0c07e79c(a4, t1, 0x6, 0x2, (t1), 0x6, 0x2);
                FUN_0c1362e4(a4, 0x3);
            }
            break;
        case 1:
            if ((*(signed char *)((a4 + 0x371A))) != 0) {
                t1 = *(signed char *)((a4 + 0x1));
                FUN_0c07e79c(a4, t1, 0x6, 0x9, (t1), 0x6, 0x9);
                FUN_0c133aec(a4);
            } else {
                t1 = *(signed char *)((a4 + 0x1));
                FUN_0c07e79c(a4, t1, 0x6, 0x3, (t1), 0x6, 0x3);
                FUN_0c1362e4(a4, 0x4);
            }
            break;
        case 2:
            t1 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t1, 0x6, 0x4, (t1), 0x6, 0x4);
            break;
        case 3:
            t1 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t1, 0x6, 0x4, (t1), 0x6, 0x4);
            break;
        }
        t1 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t1))->v) = 1.0f;
        (((struct o9C_float *)(t1))->v) = 1.0f;
        (((struct oA0_float *)(t2))->v) = 1.0f;
        (((struct o9C_float *)(t2))->v) = 1.0f;
        t1 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t1))->v) = 1.0f;
        (((struct o98_float *)(t2))->v) = 1.0f;
        (((struct o94_float *)(t1))->v) = 1.0f;
        (((struct o94_float *)(t2))->v) = 1.0f;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        FUN_0c037bf6(a4);
        FUN_0c038362(a4);
        t1 = *(signed char *)((a4 + 0x17));
        t2 = t1;
        if ((t1 == 0) || (t1 == 1)) {
            t1 = 0x371A;
            if ((*(signed char *)((a4 + 0x371A))) == 0) {
                (((struct o374B_uchar *)(a4))->v) = 0x1;
                (((struct o3830_ushort *)(a4))->v) = 0x0;
                t1 = 0x3830;
            }
            t2 = t1;
        }
        t0 = t2;
    }
    return t0;
}
