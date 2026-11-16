/* Straight-line functions with calls and guards (batch gen_o): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o118_int { char p[0x118]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o372E_uchar { char p[0x372E]; unsigned char v; };
struct o3770_int { char p[0x3770]; int v; };
struct o3770_uint { char p[0x3770]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o41D_uchar { char p[0x41D]; unsigned char v; };
struct o425_uchar { char p[0x425]; unsigned char v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c070320(int);
int FUN_0c085d0c(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0a5c50(int);
int FUN_0c0a5d88(int);
int FUN_0c0a5e0a(int);
int FUN_0c0d04c4(int, int);
int FUN_0c118810(int, int);
int FUN_0c16958a(int, int, int, int);
int FUN_0c187798(int, int, int);
int math_vec3_accumulate(int, int);
int FUN_0c0a5e2e(int a4, int a5, int a6, int a7);
int FUN_0c148494(int a4, int a5, int a6);
int FUN_0c16a064(int a4, int a5, int a6, int a7);
int FUN_0c0dd0e8(int a4, int a5, int a6, int a7);
int FUN_0c108028(int a4, int a5, int a6, int a7);
int FUN_0c048548(int a4, int a5, int a6, int a7);

int FUN_0c0a5e2e(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t5;
    register int t6;
    register int t7;
    int t1;

    if (((int)(*(signed char *)((a4 + 0x15))) < (int)0x2) && (t1 = (((struct o3770_int *)(a4))->v), t1 == 0)) {
        FUN_0c085d0c(a4, a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        t5 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t5))->v) = 5.0f;
        (((struct o94_float *)(t5))->v) = 5.0f;
        t6 = (((struct o11C_int *)(a4))->v);
        (((struct o98_float *)(t6))->v) = 5.0f;
        (((struct o94_float *)(t6))->v) = 5.0f;
        return 0x94;
    }
    t7 = *(signed char *)((a4 + 0x15));
    switch (t7) {
    case 0:
        FUN_0c0a5c50(a4);
        break;
    case 1:
        FUN_0c0a5d88(a4);
        break;
    case 2:
        FUN_0c0a5e0a(a4);
        break;
    }
    (((struct o3770_uint *)(a4))->v) = 0x0;
    return FUN_0c070320(a4);
}

int FUN_0c148494(int a4, int a5, int a6)
{
    register int t1;
    register int t2;

    (((struct o15_uchar *)(a4))->v) = 0x0;
    (((struct o16_uchar *)(a4))->v) = 0x0;
    (((struct o17_uchar *)(a4))->v) = 0x0;
    (((struct o41D_uchar *)(a4))->v) = a5;
    if ((unsigned char)(*(signed char *)((a4 + 0x41C))) == 0xC4) {
        if ((*(signed char *)((a4 + 0x41D))) == 6) {
            (((struct o41D_uchar *)(a4))->v) = 0x2;
        }
        *(unsigned char *)((a4 + 0x1)) = a6;
        return a6;
    }
    if ((signed char)a5 != 4) {
        if ((signed char)a5 != 5) {
            if ((signed char)a5 != 6) {
                t1 = (signed char)a5;
                if (((signed char)a5 == 7) || ((signed char)a5 == 8)) {
                    *(unsigned char *)((a4 + 0x1)) = a6;
                    t1 = a6;
                }
                t2 = t1;
            } else {
                (((struct o372E_uchar *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498)))->v) = 0x1;
                (((struct oA4_uint *)(a4))->v) = 0x0;
                *(volatile signed char *)((a4 + 0x1));
                FUN_0c187798(a4, 0xC532498, a6);
                (((struct o2C_float *)(t1))->v) = (((((struct o2C_float *)(t1))->v)) + 180.0f);
                (((struct o425_uchar *)(t1))->v) = ((*(signed char *)((t1 + 0x425))) + 0x1);
                t2 = 0x425;
            }
            t1 = t2;
        } else {
            (((struct oAA_uchar *)(a4))->v) = 0x0;
            t1 = 0xAA;
        }
    } else {
        *(unsigned char *)((a4 + 0x1)) = a6;
        (((struct oAA_uchar *)(a4))->v) = 0x0;
        t1 = 0xAA;
    }
    return t1;
}

int FUN_0c16a064(int a4, int a5, int a6, int a7)
{
    register int t0;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x3C;
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
    }
    t0 = FUN_0c16958a(a4, 0x1, 0x0, 0x2);
    if (t0 != 0) {
        FUN_0c037498(((((struct oC4_int *)(a4))->v)), (*(signed char *)(((0x41C + a4) + 0x1))), 0x3A, (*(int *)0xC4B40CC));
    }
    u0 = (((struct o48_float *)(a4))->v);
    (((struct o48_float *)(a4))->v) = (u0 + 0.0500000007f);
    if (!(1.0f > (u0 + 0.0500000007f))) {
        (((struct o48_float *)(a4))->v) = 1.0f;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    (((struct o40_float *)(a4))->v) = ((((struct o48_float *)(a4))->v));
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}

int FUN_0c0dd0e8(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    register int t3;

    if ((*(signed char *)0xC54223C) != 0) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        t3 = t2;
        if (t2 == 1) {
            if (((*(signed char *)((a4 + 0x15))) == 0) && (t0 = *(signed char *)0xC54098D, (int)t0 >= (int)0x4)) {
                *(unsigned short *)(((0x4 + (0x12A + a4)) + 0x0)) = 0x0;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
            t3 = 0x15;
        }
        t0 = t3;
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        FUN_0c0d04c4((0xAC + a4), (a4 + 0x34));
        t2 = 0x0;
        for (;;) {
            if ((int)t2 >= (int)((((struct oC0_int *)(a4))->v))) {
                break;
            }
            t3 = t2;
            t3 = (t3 << 2);
            t3 = (t3 + (0xC4 + a4));
            t3 = (*(int *)((t3 + 0x0)));
            FUN_0c0d04c4((t3 + 0x6), (t3 + 0x78));
            t2 = (t2 + 0x1);
        }
        if (((*(signed char *)((a4 + 0x15))) == 0) && (t1 = *(signed char *)0xC54098D, (int)t1 >= (int)0x4)) {
            *(unsigned short *)(((0x4 + (0x12A + a4)) + 0x0)) = 0x0;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        }
        t0 = 0x15;
    }
    return t0;
}

int FUN_0c108028(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;

    *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x100);
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 99) {
            return t0;
        }
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    FUN_0c187798(a4, a5, a6);
    u0 = (((struct o0_float *)0xC108118)->v);
    u1 = (((struct o30_float *)(a4))->v);
    u2 = (((struct o4_float *)0xC108118)->v);
    (((struct o40_float *)(a4))->v) = (1.0f / (u2 / (u1 + u0)));
    (((struct o44_float *)(a4))->v) = (1.0f / (u2 / (u1 + u0)));
    (((struct o48_float *)(a4))->v) = (1.0f / (u2 / (u1 + u0)));
    FUN_0c118810(a4, (*(int *)((((*(int *)0xC474404) << 2) + 0xC474410))));
    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) / (u2 / (u1 + u0)));
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) / (u2 / (u1 + u0)));
    (((struct o30_float *)(a4))->v) = ((-((((struct o30_float *)(a4))->v))) + ((((struct o14_float *)0xC108118)->v)));
    t0 = *(signed char *)((0x14 + (*(int *)((a4 + 0x10)))));
    t1 = t0;
    if (t0 == 80) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c048548(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, 0x0, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
    }
    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
    t0 = 0x0;
    t1 = 0x0;
    for (;;) {
        if ((int)t1 >= (int)((((struct oC0_int *)(a4))->v))) {
            break;
        }
        t0 = t1;
        t0 = (t0 << 2);
        t0 = (t0 + (0xC4 + a4));
        t0 = (*(int *)((t0 + 0x0)));
        if ((int)((int)((int)(*(short *)((a4 + 0x1E))) / (int)0xA)) > (int)t1) {
            *(unsigned char *)((t0 + 0x0)) = 0x1;
            u0 = ((((struct o8C_float *)(t0))->v));
            u0 = (u0 - 0.100000001f);
            (((struct o8C_float *)(t0))->v) = u0;
            if (!((((((struct o8C_float *)(t0))->v))) > 0.300000012f)) {
                (((struct o8C_float *)(t0))->v) = 0.300000012f;
            }
            u0 = ((((struct o8C_float *)(t0))->v));
            (((struct o88_float *)(t0))->v) = u0;
            (((struct o84_float *)(t0))->v) = u0;
        }
        t1 = (t1 + 0x1);
    }
    return 0xC0;
}
