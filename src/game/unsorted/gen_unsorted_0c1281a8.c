/* game/unsorted: functions 0C1281A8-0C1283FA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c187798(void);
int FUN_0c1281a8(int a4, int a5);
int FUN_0c12825a(int a4, int a5, int a6, int a7);

int FUN_0c1281a8(int a4, int a5)
{
    int stk[1];
    register int t2;
    register int t3;
    register int t20;
    register int t7;
    register int t8;
    register int t18;
    register float u13;
    register int t16;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t2 = FUN_0c037320(0x2, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t3 = FUN_0c03f444(0x5, 0x0, t2);
    t20 = t3;
    if (t3 != 0) {
        *(unsigned int *)((t3 + 0x4)) = 0xC12825A;
        *(unsigned char *)((t3 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t3 + 0x10)) = a4;
        FUN_0c03733c(t3, 0x2, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        (((struct oA8_uchar *)(t3))->v) = 0x1;
        (((struct oAC_ushort *)(t3))->v) = 0xF;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        t7 = ((int (*)(int))(FUN_0c187798))(0x1);
        t8 = ((int (*)(void))(FUN_0c187798))();
        if ((*(signed char *)(((int)stk + 0))) == 0) {
            u13 = ((((struct o0_float *)0xC1282B4)->v));
        } else {
            u13 = ((((struct o4_float *)0xC1282B4)->v));
        }
        *(unsigned char *)((((((struct oC4_int *)(t3))->v)) + 0x0)) = t16;
        *(unsigned short *)((((((struct oC4_int *)(t3))->v)) + 0x6)) = 0x1F;
        t18 = (((struct oC4_int *)(t3))->v);
        (((struct o88_float *)(t18))->v) = u13;
        (((struct o84_float *)(t18))->v) = u13;
        (((struct o8C_float *)(((((struct oC4_int *)(t3))->v))))->v) = 0.0f;
        t20 = 0x8C;
    }
    return t20;
}

int FUN_0c12825a(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                t1 = (((struct oC4_int *)(a4))->v);
                (((struct o8C_float *)(t1))->v) = (((((struct o8C_float *)(t1))->v)) - 0.0250000004f);
                if (!(0.0f > ((((struct o8C_float *)(((((struct oC4_int *)(a4))->v))))->v)))) {
                    t1 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                    t2 = (short)(t1 - 1);
                    if ((short)(t1 - 1) == 0) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t2 = 0x14;
                    }
                    t1 = t2;
                } else {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t1 = 0x14;
                }
                return t1;
            }
            if (t0 == 3) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            if (t0 == 4) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            return t0;
        }
    } else {
        u0 = math_sin_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000));
        u1 = (u0 * (math_cos_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))));
        (((struct o4C_float *)(a4))->v) = (u1 * 50.0f);
        (((struct o50_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000))) * 50.0f);
        u0 = math_sin_angle16(((-(*(int *)((a4 + 0x34)))) + 0x14000));
        u1 = (u0 * (math_sin_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))));
        (((struct o54_float *)(a4))->v) = (u1 * 50.0f);
        *(unsigned short *)((a4 + 0x1C)) = 0x3C;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    if ((*(signed char *)((0x14 + (*(int *)((a4 + 0x10)))))) != 2) {
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        if ((short)(t0 - 1) == 0) {
            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) - ((((struct o4C_float *)(a4))->v)));
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
            (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) - ((((struct o54_float *)(a4))->v)));
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) - 0.0250000004f);
            *(unsigned short *)((a4 + 0x1C)) = 0x3C;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t0 = 0x14;
        } else {
            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - ((((struct o50_float *)(a4))->v)));
            (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
            t1 = (((struct oC4_int *)(a4))->v);
            (((struct o8C_float *)(t1))->v) = (((((struct o8C_float *)(t1))->v)) + 0.0250000004f);
            t0 = 0x8C;
        }
        t1 = t0;
    } else {
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) - ((((struct o4C_float *)(a4))->v)));
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) - ((((struct o54_float *)(a4))->v)));
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o8C_float *)(t0))->v) = (((((struct o8C_float *)(t0))->v)) - 0.0250000004f);
        *(unsigned short *)((a4 + 0x1C)) = 0x3C;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}
