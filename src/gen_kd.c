/* Straight-line functions with calls and guards (batch gen_kd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o12E_short { char p[0x12E]; short v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o168_float { char p[0x168]; float v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3728_uchar { char p[0x3728]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3770_int { char p[0x3770]; int v; };
struct o3830_ushort { char p[0x3830]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o446_uchar { char p[0x446]; unsigned char v; };
struct o447_uchar { char p[0x447]; unsigned char v; };
struct o48_float { char p[0x48]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07d086(int, int, float);
int FUN_0c07e2f4(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c085d0c(int, int, int, int);
int FUN_0c13f118(int);
int FUN_0c187798(int);
int math_vec3_accumulate(int, int);
int nlCalcPoint(int, int);
int nlRotateAY(int);
int nlUnitMatrix(void);
int FUN_0c097e72(int a4, int a5, int a6, int a7);
int FUN_0c13e90c(int a4, int a5);

int FUN_0c097e72(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;
    register float u2;

    if (((((struct o3770_int *)(a4))->v)) == 0) {
        return FUN_0c085d0c(a4, a5, a6, a7);
    }
    t1 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t1, 0x5, 0x2, (t1), 0x5, 0x2);
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
    FUN_0c07e79c(((((struct o3770_int *)(a4))->v)), 0xFFFFFFFF, 0x5, 0x3, 0xFFFFFFFF, 0x5, 0x3);
    t1 = (((struct o3770_int *)(a4))->v);
    t2 = *(int *)(((t1 + 0x118) + 0x4));
    t3 = (((struct o118_int *)(t1))->v);
    (((struct oA0_float *)(t2))->v) = 1.0f;
    (((struct o9C_float *)(t2))->v) = 1.0f;
    (((struct oA0_float *)(t3))->v) = 1.0f;
    (((struct o9C_float *)(t3))->v) = 1.0f;
    t1 = (((struct o3770_int *)(a4))->v);
    t2 = *(int *)(((t1 + 0x118) + 0x4));
    t3 = (((struct o118_int *)(t1))->v);
    (((struct o98_float *)(t2))->v) = 1.0f;
    (((struct o98_float *)(t3))->v) = 1.0f;
    (((struct o94_float *)(t2))->v) = 1.0f;
    (((struct o94_float *)(t3))->v) = 1.0f;
    (((struct o3728_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x0;
    u1 = *(float *)0xC541098;
    if ((((((struct o168_float *)(a4))->v)) > u1) && (t0 = (((struct o3770_int *)(a4))->v), u0 = (((struct o168_float *)(t0))->v), u0 > u1)) {
        u0 = (((struct o168_float *)(a4))->v);
        u1 = (((struct o168_float *)(((((struct o3770_int *)(a4))->v))))->v);
        u2 = u1;
        if (u1 > u0) {
            u2 = u0;
        }
        (((struct o2C_float *)(a4))->v) = u2;
    }
    (((struct o446_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
    (((struct o447_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
    FUN_0c07d086(a4, 0x0, (*(float *)0xC098048));
    t0 = (((struct o3770_int *)(a4))->v);
    (((struct o3830_ushort *)(t0))->v) = (((((struct o12E_short *)(t0))->v)) ^ 0xF);
    (((struct o374B_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    *(unsigned short *)((a4 + 0x1E)) = 0xE;
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    return 0x15;
}

int FUN_0c13e90c(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;

    t1 = FUN_0c037320(0x1, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t2 = FUN_0c03f444(0x1, 0x0, t1);
    if (t2 == 0) {
        return t2;
    }
    *(unsigned char *)((t2 + 0x1)) = (*(signed char *)((a4 + 0x1)));
    t1 = *(signed char *)((t2 + 0x1));
    *(unsigned int *)((t2 + 0x4)) = 0xC13EACC;
    FUN_0c187798((((short)t1 * (short)0x3938) + 0xC532498));
    *(unsigned char *)((t2 + 0x2)) = a5;
    FUN_0c187798(t0);
    *(unsigned int *)((t2 + 0x10)) = a4;
    (((struct o48_float *)(t2))->v) = 0.5f;
    (((struct o44_float *)(t2))->v) = 0.5f;
    (((struct o40_float *)(t2))->v) = 0.5f;
    (((struct oA8_uchar *)(t2))->v) = 0x0;
    (((struct oAC_ushort *)(t2))->v) = 0x1F;
    (((struct oA9_uchar *)(t2))->v) = 0x21;
    FUN_0c037498(((((struct oC4_int *)(t2))->v)), (*(int *)((((*(signed char *)((t2 + 0x2))) << 2) + 0xC202220))), 0x1, (*(int *)((((*(signed char *)((t2 + 0x1))) << 2) + 0xC4B40FC))));
    *(unsigned char *)((((((struct oC4_int *)(t2))->v)) + 0x0)) = 0x1;
    *(unsigned short *)((((((struct oC4_int *)(t2))->v)) + 0x6)) = 0xF;
    (((struct oA8_uchar *)(t2))->v) = 0x1;
    FUN_0c064d24(t2, 0x1, 0x33, 0x2, 0x100, (~((int)0x1 << (int)(*(signed char *)((t2 + 0x1))))), 0x0, 0x0);
    FUN_0c07e2f4(t2, 0x64);
    nlUnitMatrix();
    nlRotateAY((*(int *)((t2 + 0x38))));
    t0 = *(signed char *)((t2 + 0x2));
    nlCalcPoint((0xC2A21D8 + (((t0 << 1) + t0) << 2)), (t2 + 0x28));
    math_vec3_accumulate((t2 + 0x28), (a4 + 0x28));
    t0 = *(signed char *)((t2 + 0x2));
    *(unsigned int *)((t2 + 0x34)) = (*(int *)((0xC2021C0 + (((t0 << 1) + t0) << 2))));
    t0 = *(signed char *)((t2 + 0x2));
    *(unsigned int *)((t2 + 0x38)) = ((*(int *)((t2 + 0x38))) + (*(int *)((((((t0 << 1) + t0) << 2) + 0xC2021C0) + 0x4))));
    t0 = *(signed char *)((t2 + 0x2));
    *(unsigned int *)((t2 + 0x3C)) = (*(int *)(((0xC2021C0 + (((t0 << 1) + t0) << 2)) + 0x8)));
    *(unsigned short *)((t2 + 0x1C)) = (*(int *)((0xC202268 + ((*(signed char *)((t2 + 0x2))) << 2))));
    (((struct o1B_uchar *)(t2))->v) = (*(signed char *)0xC54223C);
    return FUN_0c13f118(t2);
}
