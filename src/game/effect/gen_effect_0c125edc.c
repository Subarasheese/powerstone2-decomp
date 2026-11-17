/* game/effect: functions 0C125EDC-0C126184, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c125edc(int a4);
int FUN_0c125f74(int a4, int a5, int a6, int a7, float f4, float f5, float f6);

int FUN_0c125edc(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t1 = FUN_0c037320(0x5, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t2 = FUN_0c03f444(0x5, 0x0, t1);
    t1 = t2;
    if (t2 != 0) {
        FUN_0c03733c(t2, 0x5, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        t3 = t0;
        t0 = 0x0;
        for (;;) {
            if ((int)t0 >= (int)((((struct oC0_int *)(t2))->v))) {
                break;
            }
            t3 = t0;
            t3 = (t3 << 2);
            t3 = (t3 + (0xC4 + t2));
            t3 = (*(int *)((t3 + 0x0)));
            *(unsigned short *)((t3 + 0x6)) = 0x21F;
            (((struct o20_float *)(t3))->v) = 1.0f;
            (((struct o1C_float *)(t3))->v) = 1.0f;
            t0 = (t0 + 0x1);
            (((struct o18_float *)(t3))->v) = 1.0f;
        }
        *(unsigned char *)((t2 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t2 + 0x4)) = 0xC125F74;
        (((struct oAC_ushort *)(t2))->v) = 0x1F;
        (((struct oA9_uchar *)(t2))->v) = 0x21;
        (((struct o48_float *)(t2))->v) = 1.0f;
        (((struct o44_float *)(t2))->v) = 1.0f;
        (((struct o40_float *)(t2))->v) = 1.0f;
        (((struct o22_ushort *)(t2))->v) = 0x0;
        t1 = 0x22;
    }
    return t1;
}

int FUN_0c125f74(int a4, int a5, int a6, int a7, float f4, float f5, float f6)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R10;
    register int R12;
    register int R13;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    v0_1 = a4;
    v0_3 = a7;
    w0_0 = f4;
    w0_2 = f5;
    w0_1 = f6;
    v0_4 = *(signed char *)((v0_1 + 0x14));
    v0_2 = (v0_4);
    v0_0 = (v0_1);
    if ((v0_4 == 0)) goto L_C125FB0;
    if ((v0_2 == 1)) goto L_C125FE8;
    if ((v0_2 != 2)) goto L_C125F8E;
    return FUN_0c03f346(v0_0, R5, a6, v0_3);
    L_C125F8E:;
    L_C12617E:;
    return v0_2;
    L_C125FE8:;
    v0_1 = (((struct oCC_int *)(v0_0))->v);
    (((struct o7C_uint *)(v0_1))->v) = (((((struct o7C_int *)(v0_1))->v)) + 0x1555);
    (((struct o84_float *)(v0_1))->v) = (((((struct o84_float *)(v0_1))->v)) + 0.100000001f);
    (((struct o8C_float *)(v0_1))->v) = (((((struct o8C_float *)(v0_1))->v)) + 0.100000001f);
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    (((struct o7C_uint *)(v0_1))->v) = (((((struct o7C_int *)(v0_1))->v)) - 0xE38);
    (((struct o84_float *)(v0_1))->v) = (((((struct o84_float *)(v0_1))->v)) + 0.0500000007f);
    (((struct o8C_float *)(v0_1))->v) = (((((struct o8C_float *)(v0_1))->v)) + 0.0500000007f);
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    (((struct o7C_uint *)(v0_1))->v) = (((((struct o7C_int *)(v0_1))->v)) + 0x71C);
    (((struct o84_float *)(v0_1))->v) = (((((struct o84_float *)(v0_1))->v)) + 0.0599999987f);
    (((struct o8C_float *)(v0_1))->v) = (((((struct o8C_float *)(v0_1))->v)) + 0.0599999987f);
    v0_1 = *(signed char *)((v0_0 + 0x15));
    v0_2 = (v0_1);
    w0_0 = (0.100000001f);
    w0_2 = (1.0f);
    if ((v0_1 == 0)) goto L_C126060;
    if ((v0_2 == 1)) goto L_C1260E0;
    goto L_C12617E;
    L_C1260E0:;
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    (((struct o88_float *)(v0_1))->v) = (((((struct o88_float *)(v0_1))->v)) - 0.200000003f);
    w0_3 = (((struct o88_float *)(v0_1))->v);
    v0_1 = (v0_1);
    w0_1 = (w0_3);
    w0_1 = (0.0f);
    FPUL_ = (0x3E4CCCCD);
    if ((w0_3 > 0.0f)) goto L_C126108;
    (((struct o88_float *)(v0_1))->v) = w0_1;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    L_C126108:;
    (((struct o88_float *)(((((struct oC8_int *)(v0_0))->v))))->v) = ((((struct o88_float *)(v0_1))->v));
    v0_2 = (0x88);
    if ((!(w0_2 > ((((struct o88_float *)(v0_1))->v))))) goto L_C12617E;
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    w0_2 = (((struct o18_float *)(v0_1))->v);
    (((struct o18_float *)(v0_1))->v) = (w0_2 - w0_0);
    v0_2 = (0x18);
    v0_1 = (v0_1);
    if ((!(0.0f > (w0_2 - w0_0)))) goto L_C12612C;
    *(float *)((v0_1 + v0_2)) = w0_1;
    L_C12612C:;
    w0_2 = *(float *)((v0_1 + v0_2));
    (((struct o20_float *)(v0_1))->v) = w0_2;
    (((struct o1C_float *)(v0_1))->v) = w0_2;
    v0_1 = (((struct oC8_int *)(v0_0))->v);
    w0_2 = (((struct o18_float *)(v0_1))->v);
    (((struct o18_float *)(v0_1))->v) = (w0_2 - w0_0);
    v0_2 = (0x18);
    v0_1 = (v0_1);
    if ((!(0.0f > (w0_2 - w0_0)))) goto L_C12614A;
    *(float *)((v0_1 + v0_2)) = w0_1;
    L_C12614A:;
    w0_2 = *(float *)((v0_1 + v0_2));
    (((struct o20_float *)(v0_1))->v) = w0_2;
    (((struct o1C_float *)(v0_1))->v) = w0_2;
    v0_0 = (((struct oCC_int *)(v0_0))->v);
    w0_2 = (((struct o18_float *)(v0_0))->v);
    (((struct o18_float *)(v0_0))->v) = (w0_2 - w0_0);
    v0_2 = (0x18);
    v0_1 = (v0_0);
    if ((!(0.0f > (w0_2 - w0_0)))) goto L_C126168;
    *(float *)((v0_1 + v0_2)) = w0_1;
    L_C126168:;
    w0_0 = *(float *)((v0_1 + v0_2));
    (((struct o20_float *)(v0_1))->v) = w0_0;
    (((struct o1C_float *)(v0_1))->v) = w0_0;
    v0_2 = (0x1C);
    goto L_C12617E;
    L_C126060:;
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    (((struct o88_float *)(v0_1))->v) = (((((struct o88_float *)(v0_1))->v)) + w0_2);
    if ((!(((((struct o88_float *)(v0_1))->v)) > 3.0f))) goto L_C126080;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    L_C126080:;
    (((struct o88_float *)((*(int *)(((0xC4 + v0_0) + 0x4)))))->v) = ((((struct o88_float *)(((((struct oC4_int *)(v0_0))->v))))->v));
    v0_0 = (((struct oCC_int *)(v0_0))->v);
    (((struct o88_float *)(v0_0))->v) = (((((struct o88_float *)(v0_0))->v)) + 0.300000012f);
    v0_2 = (0x88);
    v0_1 = (v0_0);
    FPUL_ = (0x3E99999A);
    if ((!(((((struct o88_float *)(v0_0))->v)) > w0_2))) goto L_C12617E;
    (((struct o88_float *)(v0_1))->v) = w0_2;
    v0_2 = (0x88);
    goto L_C12617E;
    L_C125FB0:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    *(unsigned short *)((v0_0 + 0x1C)) = 0x4;
    thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((v0_0 + 0x1))) * (short)0x3938) + 0xC53255C))) + 0x28), (v0_0 + 0x28));
    (((struct o2C_float *)(v0_0))->v) = (*(float *)((0xC532600 + ((short)(*(signed char *)((v0_0 + 0x1))) * (short)0x3938))));
    goto L_C125FE8;
}
