/* game/unsorted: functions 0C142868-0C142E62, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o168_float { char p[0x168]; float v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f346(int);
int FUN_0c03f444(int, int, int);
int math_vec3_mul_xyz(int, float, float, float);
int FUN_0c0582de(int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e2f4(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c17c130(int, int, int);
int FUN_0c17c450(int);
int FUN_0c187798(void);
int FUN_0c142868(int a4);
int FUN_0c142960(int a4);
int FUN_0c142a58(int a4, int a5, int a6, int a7, int a8);

int FUN_0c142868(int a4)
{
    register int t2;
    register float u3;
    register int t4;
    register int t5;
    register int t21;
    register int t16;
    register int t17;

    t2 = FUN_0c037320(0x2, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
    u3 = *(float *)0xC1429BC;
    t4 = 0x0;
    for (;;) {
        t5 = FUN_0c03f444(0x5, 0x0, t2);
        t21 = t5;
        if (t5 != 0) {
            FUN_0c03733c(t5, 0x2, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
            (((struct oAC_ushort *)(t5))->v) = 0x1F;
            (((struct oA9_uchar *)(t5))->v) = (*(signed char *)((a4 + 0xA9)));
            *(unsigned short *)((((((struct oC4_int *)(t5))->v)) + 0x6)) = 0xF;
            *(unsigned int *)((t5 + 0x4)) = 0xC142960;
            *(unsigned char *)((t5 + 0x1)) = (*(signed char *)((a4 + 0x1)));
            *(unsigned char *)((t5 + 0x2)) = t4;
            *(unsigned int *)((t5 + 0x10)) = a4;
            FUN_0c187798();
            FUN_0c187798();
            (((struct o2C_float *)(t5))->v) = ((((struct o168_float *)(a4))->v));
            FUN_0c187798();
            t16 = *(int *)(((t4 << 2) + 0xC202500));
            t17 = *(int *)((t5 + 0x38));
            *(unsigned int *)((t5 + 0x38)) = (t17 + (t16 + 0x4000));
            (((struct o54_float *)(t5))->v) = ((math_cos_angle16(((t17 + (t16 + 0x4000)) + 0x4000))) * u3);
            (((struct o4C_float *)(t5))->v) = ((math_sin_angle16(((*(int *)((t5 + 0x38))) + 0x4000))) * u3);
            (((struct o50_float *)(t5))->v) = 0.0f;
            t21 = 0x50;
        }
        t4 = (t4 + 0x1);
        if ((int)t4 >= (int)0x2) {
            break;
        }
    }
    return t21;
}

int FUN_0c142960(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = 0x1;
    }
    FUN_0c17c130((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + 0.125f);
        (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.125f);
        (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) - 0.0625f);
        if (!(((((struct o44_float *)(a4))->v)) > 0.5f)) {
            return FUN_0c03f346(a4);
        }
        return 0x44;
    }
    (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + 0.200000003f);
    t0 = 0x44;
    if (!(1.0f > ((((struct o44_float *)(a4))->v)))) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t0 = 0x15;
    }
    return t0;
}

int FUN_0c142a58(int a4, int a5, int a6, int a7, int a8)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;

    t1 = FUN_0c037320(0x1B, (*(int *)0xC4B40CC));
    t2 = 0x5;
    if ((int)a6 >= 0) {
        t2 = 0x1;
    }
    t3 = FUN_0c03f444(t2, 0x0, t1);
    t1 = t3;
    if (t3 == 0) {
    } else {
        FUN_0c03733c(t3, 0x1B, (*(int *)0xC4B40CC));
        t2 = t0;
        t0 = 0x0;
        for (;;) {
            if ((int)t0 >= (int)((((struct oC0_int *)(t3))->v))) {
                break;
            }
            t2 = t0;
            t2 = (t2 << 2);
            t2 = (t2 + (0xC4 + t3));
            t2 = (*(int *)((t2 + 0x0)));
            *(unsigned short *)((t2 + 0x6)) = 0x1F;
            if ((a5 & 0x2) != 0) {
                (((struct o88_float *)(t2))->v) = 1.0f;
                (((struct o84_float *)(t2))->v) = 1.0f;
            } else {
                (((struct o88_float *)(t2))->v) = 3.0f;
                (((struct o84_float *)(t2))->v) = 3.0f;
            }
            t0 = (t0 + 0x1);
            (((struct o8C_float *)(t2))->v) = 1.0f;
        }
        *(unsigned int *)((t3 + 0x4)) = 0xC142BDC;
        *(unsigned char *)((t3 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oAC_ushort *)(t3))->v) = 0x1F;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        *(unsigned int *)((t3 + 0x10)) = a4;
        (((struct o48_float *)(t3))->v) = 1.0f;
        (((struct o44_float *)(t3))->v) = 1.0f;
        (((struct o40_float *)(t3))->v) = 1.0f;
        (((struct o22_ushort *)(t3))->v) = a8;
        t0 = ((int (*)(int, int, int))(FUN_0c187798))(t2, ((*(int *)(((((*(int *)((((a5 & 0x1) << 2) + 0xC202508))) << 2) + (0xC4 + a4)) + 0x0))) + 0x28), 0x1F);
        FUN_0c0582de((t3 + 0x28));
        t0 = ((int (*)(void))(FUN_0c187798))();
        FUN_0c17c450((t3 + 0x4C));
        u0 = *(float *)0xC142C2C;
        math_vec3_mul_xyz((t3 + 0x4C), u0, u0, u0);
        if ((int)a6 >= 0) {
            FUN_0c07e2f4(t3, a6);
            (((struct o48_float *)(t3))->v) = 1.0f;
            (((struct o44_float *)(t3))->v) = 1.0f;
            (((struct o40_float *)(t3))->v) = 1.0f;
            FUN_0c064d24(t3, 0x1, 0x40, 0x0, 0x100, (~((int)0x1 << (int)(*(signed char *)((t3 + 0x1))))), 0x0, 0xFFFFFEF0);
        }
        *(unsigned short *)((t3 + 0x1C)) = 0x3C;
        t1 = 0x3C;
    }
    return t1;
}
