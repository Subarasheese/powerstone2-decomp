/* Straight-line functions with calls and guards (batch gen_ho): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o372E_uchar { char p[0x372E]; unsigned char v; };
struct o38_float { char p[0x38]; float v; };
struct o3818_short { char p[0x3818]; short v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o41D_uchar { char p[0x41D]; unsigned char v; };
struct o425_uchar { char p[0x425]; unsigned char v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o80_float { char p[0x80]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oE4_int { char p[0xE4]; int v; };
int FUN_0c03744a(int, int, int, int);
extern int FUN_0c037bf6();
int FUN_0c03f444(int, int, int, int);
int FUN_0c056be6(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c116c12(int, int);
float nlScalor(int);
int nlVoidUnitVector(int);
int FUN_0c1328b4(int a4, int a5, int a6, int a7);
void FUN_0c056d12(void);
int FUN_0c03733c(int a4, int a5, int a6);
int FUN_0c116c2e(int a4, int a5, int a6);
int FUN_0c148494(int a4, int a5, int a6);

int FUN_0c1328b4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t11;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1, a7);
    t11 = t0;
    if (t0 != 0) {
        FUN_0c03744a(((((struct oC4_int *)(t0))->v)), 0x0, 0x2, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        (((struct o14_uchar *)(t0))->v) = 0x0;
        (((struct o15_uchar *)(t0))->v) = 0x0;
        *(unsigned short *)((t0 + 0x1C)) = 0x0;
        *(unsigned short *)((t0 + 0x1E)) = a5;
        (((struct o20_ushort *)(t0))->v) = (*(signed char *)((a4 + 0x3753)));
        (((struct o22_ushort *)(t0))->v) = ((((struct o3818_short *)(a4))->v));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)(0xC2A1680); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)(0xC2A168C); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x40)) = *(struct mv3 *)(0xC2A1674); }
        *(unsigned int *)((t0 + 0x10)) = a4;
        (((struct oA4_uint *)(t0))->v) = (((((struct oE4_int *)(a4))->v)) + 0x28);
        *(unsigned int *)((t0 + 0x4)) = 0xC132880;
        *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0x1;
        t11 = 0x1;
    }
    return t11;
}

void FUN_0c056d12(void)
{
    int stk[35];
    register int t0;
    register int t2;
    register float t10;
    register float u12;
    register float u15;
    register float u18;
    register float u21;
    register int t3;

    t0 = 0xC1B96B4;
    t2 = ((int)stk + 0);
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0xC1B96B4 + 128)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x40)) = *(struct mv3 *)(0xC5411C4); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x34)) = *(struct mv3 *)(0xC5411F4); }
    *(float *)(((int)stk + 128)) = (((((struct o40_float *)(((int)stk + 0)))->v)) - ((((struct o34_float *)(((int)stk + 0)))->v)));
    *(float *)(((int)stk + 132)) = (((((struct o44_float *)(((int)stk + 0)))->v)) - ((((struct o38_float *)(((int)stk + 0)))->v)));
    *(float *)(((int)stk + 136)) = (((((struct o48_float *)(((int)stk + 0)))->v)) - ((((struct o3C_float *)(((int)stk + 0)))->v)));
    t10 = nlScalor((0x80 + ((int)stk + 0)));
    if (t10 != 0.0f) {
        nlVoidUnitVector((0x80 + ((int)stk + 0)));
        u12 = *(float *)0xC056E34;
        u15 = ((((struct o40_float *)(((int)stk + 0)))->v));
        u15 = u15 + u12 * ((((struct o80_float *)(((int)stk + 0)))->v));
        (((struct o40_float *)(((int)stk + 0)))->v) = u15;
        u18 = ((((struct o44_float *)(((int)stk + 0)))->v));
        u18 = u18 + u12 * ((((struct o84_float *)(((int)stk + 0)))->v));
        (((struct o44_float *)(((int)stk + 0)))->v) = u18;
        u21 = ((((struct o48_float *)(((int)stk + 0)))->v));
        u21 = u21 + u12 * ((((struct o88_float *)(((int)stk + 0)))->v));
        (((struct o48_float *)(((int)stk + 0)))->v) = u21;
        FUN_0c056be6(0xC2419B0, ((int)stk + 0));
    }
}

int FUN_0c03733c(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = *(int *)((((((a5 << 2) << 2) << 1) + (a6 + 0x10)) + 0x18));
    t1 = *(int *)((((((a5 << 2) << 2) << 1) + (a6 + 0x10)) + 0x1C));
    if ((int)t0 > 0) {
        t2 = 0x0;
        t3 = 0x0;
        t4 = t1;
        for (;;) {
            t1 = *(int *)((((0xC4 + a4) + t2) + 0x0));
            *(unsigned int *)((t1 + 0x8)) = (*(int *)((t4 + 0x0)));
            *(unsigned int *)((t1 + 0xC)) = (*(int *)((t4 + 0x4)));
            *(unsigned int *)((t1 + 0x10)) = (*(int *)((t4 + 0x8)));
            t5 = *(int *)(((t4 + 0xC) + 0x4));
            if ((int)(*(int *)(((t4 + 0xC) + 0x0))) < 0) {
                (((struct o68_uint *)(t1))->v) = 0x0;
            } else {
                (((struct o68_uint *)(t1))->v) = ((*(int *)((((t5 << 2) + (0xC4 + a4)) + 0x0))) + 0x28);
            }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x6C)) = *(struct mv3 *)((t4 + 0x24)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x78)) = *(struct mv3 *)((t4 + 0x30)); }
            t3 = (t3 + 0x1);
            t4 = (t4 + 0x3C);
            t2 = (t2 + 0x4);
            if ((int)t3 >= (int)t0) {
                break;
            }
        }
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((((a5 << 2) << 2) << 1) + (a6 + 0x10))); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x34)) = *(struct mv3 *)((((((a5 << 2) << 2) << 1) + (a6 + 0x10)) + 0xC)); }
    return 0x0;
}

int FUN_0c116c2e(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(signed char *)(((a4 + 0x41C) + 0x2));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        t0 = ((int (*)(int, int, int))(FUN_0c037bf6))(0xC539708, a5, a6);
        if ((unsigned char)t0 != 0) {
            return FUN_0c116c12(a4, 0x1);
        }
        return (unsigned char)t0;
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC539730) = *(struct mv3 *)(0xC1FC7A4); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC53973C) = *(struct mv3 *)(0xC1FC7B0); }
    t0 = *(signed char *)0xC539709;
    FUN_0c07e79c(0xC539708, t0, 0x0, 0x14, (t0), 0x0, 0x14);
    *(unsigned char *)(((a4 + 0x41C) + 0x2)) = ((*(signed char *)(((a4 + 0x41C) + 0x2))) + 0x1);
    t0 = ((int (*)(int))(FUN_0c037bf6))(0xC539708);
    if ((unsigned char)t0 != 0) {
        return FUN_0c116c12(a4, 0x1);
    }
    return (unsigned char)t0;
}

int FUN_0c148494(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

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
                t0 = (signed char)a5;
                if (((signed char)a5 == 7) || ((signed char)a5 == 8)) {
                    *(unsigned char *)((a4 + 0x1)) = a6;
                    t0 = a6;
                }
                t1 = t0;
            } else {
                (((struct o372E_uchar *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498)))->v) = 0x1;
                (((struct oA4_uint *)(a4))->v) = 0x0;
                { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498) + 0x28)); }
                (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 180.0f);
                (((struct o425_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x425))) + 0x1);
                t1 = 0x425;
            }
            t0 = t1;
        } else {
            (((struct oAA_uchar *)(a4))->v) = 0x0;
            t0 = 0xAA;
        }
        t1 = t0;
    } else {
        *(unsigned char *)((a4 + 0x1)) = a6;
        (((struct oAA_uchar *)(a4))->v) = 0x0;
        t1 = 0xAA;
    }
    return t1;
}
