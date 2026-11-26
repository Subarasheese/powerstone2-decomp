/* Straight-line functions with calls and guards (batch gen_kw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_short { char p[0x24]; short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o378C_float { char p[0x378C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
extern int FUN_0c03f444();
float math_cos_angle16(int);
float math_sin_angle16(int);
int nlRand(void);
int thunk_FUN_0c058310(int, int);
int FUN_0c15c344(int a4, int a5, int a6, int a7, float f4);
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o1E_ushort { char p[0x1E]; unsigned short v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o6_ushort { char p[0x6]; unsigned short v; };


int FUN_0c15c344(int a4, int a5, int a6, int a7, float f4)
{
    int t4;
    int t6;
    int t7;
    int t5;
    float u0;
    int t3;
    int t0;
    int t9;
    float u1;
    int t2;
    int t10;
    int t1;
    int t8;

    t0 = (((struct oC_int *)0xC4B40CC)->v);
    t1 = (((struct o0_int *)0xC4B40CC)->v);
    t2 = a6;
    if ((unsigned int)a6 >= (unsigned int)0xF) {
    } else {
        switch ((a6 << 1)) {
            case 0:
            {
                t3 = FUN_0c037320(0x1C, t0);
                t4 = t3;
                if ((int)t3 < 0) {
                } else {
                    t3 = ((int (*)(int, int, int))(FUN_0c03f444))(0x5, 0x0, 0x3);
                    t5 = t3;
                    if (t3 != 0) {
                        (((struct o1_uchar *)(t3))->v) = (*(signed char *)(a4 + 0x1));
                        (((struct o2_uchar *)(t3))->v) = a6;
                        (((struct o4_uint *)(t3))->v) = 0xC15B5B4;
                        (((struct oA8_uchar *)(t3))->v) = 0x1;
                        (((struct oAC_ushort *)(t3))->v) = 0x1F;
                        (((struct oA9_uchar *)(t3))->v) = 0x21;
                        (((struct o48_float *)(t3))->v) = 1.0f;
                        (((struct o44_float *)(t3))->v) = 1.0f;
                        (((struct o40_float *)(t3))->v) = 1.0f;
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t3 + 0x28) = *(struct mv3 *)(a5); }
                        (((struct o1C_ushort *)(t3))->v) = 0x1E;
                        t6 = 0xC15C504;
                        t7 = 0x0;
                        t8 = a4;
                        for (;;) {
                            if ((unsigned int)t7 >= (unsigned int)0xC) {
                                break;
                            }
                            t8 = (*(int *)((((0xC4 + t3) + t7) + 0x0)));
                            t6 = (FUN_0c03744a(t8, 0x1, 0x1C, ((((struct oC_int *)0xC4B40CC)->v))));
                            *(unsigned char *)(t8) = 0x1;
                            (((struct o6_ushort *)(t8))->v) = 0x3F;
                            (((struct o6C_float *)(t8))->v) = 0.0f;
                            (((struct o74_float *)(t8))->v) = 0.0f;
                            (((struct o70_float *)(t8))->v) = 60.0f;
                            t6 = (nlRand());
                            u1 = ((((float)(t6 % 0x4)) / 10.0f) + (*(float *)((0xC15C50C + 0x0))));
                            (((struct o8C_float *)(t8))->v) = u1;
                            t6 = (0x8C - 4);
                            *(float *)((t8 + t6)) = u1;
                            *(float *)((t8 + (t6 - 4))) = u1;
                            t6 = (nlRand());
                            (((struct o18_float *)(t8))->v) = ((((float)((int)((int)t6 % (int)0x28))) + -20.0f) / (*(float *)((0xC15C514 + 0x0))));
                            t6 = (nlRand());
                            (((struct o1C_float *)(t8))->v) = (((float)((int)((int)t6 % (int)0xA))) + 10.0f);
                            t6 = (nlRand());
                            t9 = ((int)((int)t6 % (int)0x28));
                            u0 = (*(float *)((0xC15C514 + 0x0)));
                            t6 = 0x20;
                            t7 = (t7 + 0x4);
                            u1 = ((((float)t9) + -20.0f) / u0);
                            *(float *)((t8 + 0x20)) = u1;
                        }
                        t5 = t6;
                    }
                    t4 = t5;
                }
                t3 = t4;
            }
                break;
            case 2:
            {
                t4 = FUN_0c037320(0x1D, t0);
                t5 = t4;
                if ((int)t4 < 0) {
                } else {
                    t4 = ((int (*)(int, int, int))(FUN_0c03f444))(0x5, 0x0, 0x3);
                    t6 = t4;
                    if (t4 != 0) {
                        (((struct o1_uchar *)(t4))->v) = (*(signed char *)(a4 + 0x1));
                        (((struct o2_uchar *)(t4))->v) = a6;
                        (((struct o4_uint *)(t4))->v) = 0xC15B65C;
                        (((struct oA8_uchar *)(t4))->v) = 0x1;
                        (((struct oAC_ushort *)(t4))->v) = 0x1F;
                        (((struct oA9_uchar *)(t4))->v) = 0x21;
                        (((struct o48_float *)(t4))->v) = 1.0f;
                        (((struct o44_float *)(t4))->v) = 1.0f;
                        (((struct o40_float *)(t4))->v) = 1.0f;
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t4 + 0x28) = *(struct mv3 *)(a5); }
                        (((struct o1C_ushort *)(t4))->v) = 0x0;
                        t7 = 0x0;
                        t8 = 0x0;
                        t9 = a4;
                        for (;;) {
                            if ((unsigned int)t8 >= (unsigned int)0xC) {
                                break;
                            }
                            t9 = (*(int *)((((0xC4 + t4) + t8) + 0x0)));
                            t7 = (FUN_0c03744a(t9, 0x1, 0x1D, ((((struct oC_int *)0xC4B40CC)->v))));
                            *(unsigned char *)(t9) = 0x1;
                            (((struct o6_ushort *)(t9))->v) = 0x1F;
                            (((struct o70_float *)(t9))->v) = 0.0f;
                            (((struct o74_float *)(t9))->v) = 0.0f;
                            (((struct o6C_float *)(t9))->v) = 0.0f;
                            t7 = (nlRand());
                            u0 = *(float *)((0xC15C640 + 0x0));
                            u1 = ((((float)(t7 % 0x4)) / 10.0f) + u0);
                            (((struct o8C_float *)(t9))->v) = u1;
                            t7 = (0x8C - 4);
                            *(float *)((t9 + t7)) = u1;
                            *(float *)((t9 + (t7 - 4))) = u1;
                            t7 = (nlRand());
                            (((struct o18_float *)(t9))->v) = ((((float)((int)((int)t7 % (int)0x28))) + -20.0f) / 10.0f);
                            t7 = (nlRand());
                            (((struct o1C_float *)(t9))->v) = ((((float)((int)((int)t7 % (int)0x28))) + -20.0f) / 10.0f);
                            t7 = (nlRand());
                            t10 = ((int)((int)t7 % (int)0xF));
                            t7 = 0x20;
                            t8 = (t8 + 0x4);
                            u1 = (((float)t10) + 10.0f);
                            *(float *)((t9 + 0x20)) = u1;
                        }
                        t6 = t7;
                    }
                    t5 = t6;
                }
                t3 = t5;
            }
                break;
            case 4:
            {
                t4 = FUN_0c037320(0x2E, t1);
                t5 = t4;
                if ((int)t4 < 0) {
                } else {
                    t4 = ((int (*)(int, int, int))(FUN_0c03f444))(0x5, 0x0, 0x1);
                    t6 = t4;
                    if (t4 == 0) {
                    } else {
                        (((struct o1_uchar *)(t4))->v) = (*(signed char *)(a4 + 0x1));
                        (((struct o2_uchar *)(t4))->v) = a6;
                        (((struct o4_uint *)(t4))->v) = 0xC15B758;
                        (((struct oA8_uchar *)(t4))->v) = 0x0;
                        (((struct oAC_ushort *)(t4))->v) = 0x3F;
                        (((struct oA9_uchar *)(t4))->v) = 0x21;
                        (((struct o10_uint *)(t4))->v) = a4;
                        u0 = (((struct o378C_float *)(a4))->v);
                        (((struct o48_float *)(t4))->v) = (u0 * 1.5f);
                        (((struct o44_float *)(t4))->v) = (u0 * 1.5f);
                        (((struct o40_float *)(t4))->v) = (u0 * 1.5f);
                        (((struct o1C_ushort *)(t4))->v) = 0x0;
                        t7 = (((struct oC4_int *)(t4))->v);
                        FUN_0c03744a(t7, 0x0, 0x2E, ((((struct o0_int *)0xC4B40CC)->v)));
                        *(unsigned char *)(t7) = 0x1;
                        (((struct o6_ushort *)(t7))->v) = 0xF;
                        (((struct o70_float *)(t7))->v) = 0.0f;
                        (((struct o74_float *)(t7))->v) = 0.0f;
                        (((struct o6C_float *)(t7))->v) = 0.0f;
                        (((struct o8C_float *)(t7))->v) = 1.0f;
                        (((struct o88_float *)(t7))->v) = 1.0f;
                        (((struct o84_float *)(t7))->v) = 1.0f;
                        t6 = 0x84;
                    }
                    t5 = t6;
                }
                t3 = t5;
            }
                break;
            case 6:
            {
                t4 = FUN_0c037320(0x13, t1);
                t5 = t4;
                if ((int)t4 < 0) {
                } else {
                    t4 = ((int (*)(int, int, int))(FUN_0c03f444))(0x5, 0x0, 0x1);
                    t6 = t4;
                    if (t4 == 0) {
                    } else {
                        (((struct o1_uchar *)(t4))->v) = (*(signed char *)(a4 + 0x1));
                        (((struct o2_uchar *)(t4))->v) = a6;
                        (((struct o4_uint *)(t4))->v) = 0xC15B91C;
                        (((struct oA8_uchar *)(t4))->v) = 0x1;
                        (((struct oAC_ushort *)(t4))->v) = 0x3F;
                        (((struct oA9_uchar *)(t4))->v) = 0x21;
                        (((struct o10_uint *)(t4))->v) = a4;
                        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)(t4 + 0x1)) * (short)0x3938) + 0xC532564))) + 0x28), (t4 + 0x28));
                        u0 = (((struct o378C_float *)(a4))->v);
                        (((struct o48_float *)(t4))->v) = (u0 * 1.5f);
                        (((struct o44_float *)(t4))->v) = (u0 * 1.5f);
                        (((struct o40_float *)(t4))->v) = (u0 * 1.5f);
                        (((struct o1C_ushort *)(t4))->v) = 0x0;
                        (((struct o1E_ushort *)(t4))->v) = 0x0;
                        t7 = (((struct oC4_int *)(t4))->v);
                        FUN_0c03744a(t7, 0x0, 0x13, ((((struct o0_int *)0xC4B40CC)->v)));
                        *(unsigned char *)(t7) = 0x1;
                        (((struct o6_ushort *)(t7))->v) = 0xF;
                        (((struct o70_float *)(t7))->v) = 0.0f;
                        (((struct o74_float *)(t7))->v) = 0.0f;
                        (((struct o6C_float *)(t7))->v) = 0.0f;
                        (((struct o8C_float *)(t7))->v) = 1.0f;
                        (((struct o88_float *)(t7))->v) = 1.0f;
                        (((struct o84_float *)(t7))->v) = 1.0f;
                        t6 = 0x84;
                    }
                    t5 = t6;
                }
                t3 = t5;
            }
                break;
            case 8:
            {
                t4 = FUN_0c037320(0x2A, t1);
                t5 = t4;
                if ((int)t4 < 0) {
                } else {
                    t4 = ((int (*)(int, int, int))(FUN_0c03f444))(0x5, 0x0, 0x1);
                    t6 = t4;
                    if (t4 == 0) {
                    } else {
                        (((struct o1_uchar *)(t4))->v) = (*(signed char *)(a4 + 0x1));
                        (((struct o2_uchar *)(t4))->v) = a6;
                        (((struct o4_uint *)(t4))->v) = 0xC15BA84;
                        (((struct oA8_uchar *)(t4))->v) = 0x1;
                        (((struct oAC_ushort *)(t4))->v) = 0xF;
                        (((struct oA9_uchar *)(t4))->v) = 0x21;
                        (((struct o10_uint *)(t4))->v) = a4;
                        (((struct o30_float *)(t4))->v) = 0.0f;
                        (((struct o2C_float *)(t4))->v) = 0.0f;
                        (((struct o28_float *)(t4))->v) = 0.0f;
                        (((struct o48_float *)(t4))->v) = 1.0f;
                        (((struct o44_float *)(t4))->v) = 1.0f;
                        (((struct o40_float *)(t4))->v) = 1.0f;
                        (((struct o1C_ushort *)(t4))->v) = 0x0;
                        (((struct o1E_ushort *)(t4))->v) = 0x0;
                        t7 = (((struct oC4_int *)(t4))->v);
                        FUN_0c03744a(t7, 0x0, 0x2A, ((((struct o0_int *)0xC4B40CC)->v)));
                        *(unsigned char *)(t7) = 0x1;
                        (((struct o6_ushort *)(t7))->v) = 0x21F;
                        (((struct o18_float *)(t7))->v) = 1.0f;
                        (((struct o1C_float *)(t7))->v) = 1.0f;
                        (((struct o20_float *)(t7))->v) = 1.0f;
                        (((struct o68_uint *)(t7))->v) = (((((struct o10_int *)(t4))->v)) + 0x64);
                        (((struct o70_float *)(t7))->v) = 0.0f;
                        (((struct o6C_float *)(t7))->v) = 0.0f;
                        (((struct o74_float *)(t7))->v) = 10.0f;
                        u0 = 1.0f;
                        if ((unsigned char)(*(signed char *)(a4 + 0x41C)) == 37) {
                            u0 = 1.39999998f;
                        }
                        (((struct o8C_float *)(t7))->v) = u0;
                        (((struct o88_float *)(t7))->v) = u0;
                        (((struct o84_float *)(t7))->v) = u0;
                        t6 = 0x84;
                    }
                    t5 = t6;
                }
                t3 = t5;
            }
                break;
            case 10:
            {
                t4 = FUN_0c037320(0x34, t0);
                t5 = t4;
                if ((int)t4 < 0) {
                } else {
                    t6 = ((int (*)(int, int, int))(FUN_0c03f444))(0x5, 0x0, t4);
                    t4 = t6;
                    if (t6 == 0) {
                    } else {
                        (((struct o1_uchar *)(t6))->v) = (*(signed char *)(a4 + 0x1));
                        (((struct o2_uchar *)(t6))->v) = a6;
                        (((struct o4_uint *)(t6))->v) = 0xC15BB04;
                        (((struct oA8_uchar *)(t6))->v) = 0x1;
                        (((struct oAC_ushort *)(t6))->v) = 0x1F;
                        (((struct oA9_uchar *)(t6))->v) = 0x21;
                        (((struct o10_uint *)(t6))->v) = a4;
                        u0 = *(float *)((0xC535C24 + ((short)(*(signed char *)(t6 + 0x1)) * (short)0x3938)));
                        (((struct o48_float *)(t6))->v) = u0;
                        (((struct o44_float *)(t6))->v) = u0;
                        (((struct o40_float *)(t6))->v) = u0;
                        (((struct o1C_ushort *)(t6))->v) = 0x0;
                        (((struct o1E_ushort *)(t6))->v) = 0x0;
                        (((struct oA4_uint *)(t6))->v) = ((*(int *)((0xC5325A4 + ((short)(*(signed char *)(a4 + 0x1)) * (short)0x3938)))) + 0x28);
                        FUN_0c03733c(t6, 0x34, ((((struct oC_int *)0xC4B40CC)->v)));
                        t7 = (((struct oC4_int *)(t6))->v);
                        *(unsigned char *)(t7) = 0x1;
                        (((struct o6_ushort *)(t7))->v) = 0xF;
                        (((struct o74_float *)(t7))->v) = 0.0f;
                        (((struct o70_float *)(t7))->v) = 0.0f;
                        (((struct o6C_float *)(t7))->v) = 0.0f;
                        t7 = (((struct oC4_int *)(t6))->v);
                        (((struct o78_uint *)(t7))->v) = (((((struct o78_int *)(t7))->v)) - 14563);
                        t7 = (((struct oC8_int *)(t6))->v);
                        (((struct o78_uint *)(t7))->v) = (((((struct o78_int *)(t7))->v)) + 0x71C7);
                        (((struct o30_float *)(t6))->v) = 0.0f;
                        (((struct o28_float *)(t6))->v) = 0.0f;
                        (((struct o2C_float *)(t6))->v) = -30.0f;
                        t4 = 0x2C;
                    }
                    t5 = t4;
                }
                t3 = t5;
            }
                break;
            case 12:
            {
                t4 = FUN_0c037320(0x3F, t1);
                t5 = t4;
                if ((int)t4 < 0) {
                } else {
                    t6 = ((int (*)(int, int, int))(FUN_0c03f444))(0x5, 0x0, t4);
                    t4 = t6;
                    if (t6 == 0) {
                    } else {
                        FUN_0c03733c(t6, 0x3F, ((((struct o0_int *)0xC4B40CC)->v)));
                        (((struct o1_uchar *)(t6))->v) = (*(signed char *)(a4 + 0x1));
                        (((struct o2_uchar *)(t6))->v) = a6;
                        (((struct o4_uint *)(t6))->v) = 0xC15BC68;
                        (((struct oA8_uchar *)(t6))->v) = 0x1;
                        (((struct oAC_ushort *)(t6))->v) = 0x3F;
                        (((struct oA9_uchar *)(t6))->v) = 0x21;
                        (((struct o10_uint *)(t6))->v) = a4;
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t6 + 0x28) = *(struct mv3 *)(a5); }
                        (((struct o48_float *)(t6))->v) = 0.100000001f;
                        (((struct o44_float *)(t6))->v) = 0.100000001f;
                        (((struct o40_float *)(t6))->v) = 0.100000001f;
                        (((struct o1C_ushort *)(t6))->v) = (((int)((int)(nlRand()) % (int)0x1E)) + 0x32);
                        (((struct o1E_ushort *)(t6))->v) = 0x0;
                        t7 = (((struct oC4_int *)(t6))->v);
                        *(unsigned char *)(t7) = 0x1;
                        (((struct o6_ushort *)(t7))->v) = 0xF;
                        (((struct o18_float *)(t7))->v) = 1.0f;
                        (((struct o1C_float *)(t7))->v) = 1.0f;
                        (((struct o20_float *)(t7))->v) = 1.0f;
                        (((struct o74_float *)(t7))->v) = 0.0f;
                        (((struct o70_float *)(t7))->v) = 0.0f;
                        (((struct o6C_float *)(t7))->v) = 0.0f;
                        (((struct o8C_float *)(t7))->v) = 0.0f;
                        (((struct o88_float *)(t7))->v) = 0.0f;
                        (((struct o84_float *)(t7))->v) = 0.0f;
                        t4 = 0x84;
                    }
                    t5 = t4;
                }
                t3 = t5;
            }
                break;
            case 14:
            {
                t4 = FUN_0c037320(0x4A, t1);
                t5 = t4;
                if ((int)t4 < 0) {
                } else {
                    t6 = ((int (*)(int, int, int))(FUN_0c03f444))(0x5, 0x0, t4);
                    t4 = t6;
                    if (t6 == 0) {
                    } else {
                        FUN_0c03733c(t6, 0x4A, ((((struct o0_int *)0xC4B40CC)->v)));
                        (((struct o1_uchar *)(t6))->v) = (*(signed char *)(a4 + 0x1));
                        (((struct o2_uchar *)(t6))->v) = a6;
                        (((struct o4_uint *)(t6))->v) = 0xC15BD90;
                        (((struct oA8_uchar *)(t6))->v) = 0x1;
                        (((struct oAC_ushort *)(t6))->v) = 0xF;
                        (((struct oA9_uchar *)(t6))->v) = 0x21;
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t6 + 0x28) = *(struct mv3 *)(a5); }
                        (((struct o48_float *)(t6))->v) = 1.0f;
                        (((struct o44_float *)(t6))->v) = 1.0f;
                        (((struct o40_float *)(t6))->v) = 1.0f;
                        (((struct o10_uint *)(t6))->v) = a4;
                        (((struct o1C_ushort *)(t6))->v) = 0x28;
                        (((struct o1E_ushort *)(t6))->v) = 0x1E;
                        t7 = (((struct oC4_int *)(t6))->v);
                        *(unsigned char *)(t7) = 0x0;
                        (((struct o6_ushort *)(t7))->v) = 0x3F;
                        (((struct o70_float *)(t7))->v) = ((*(float *)((0xC535C24 + ((short)(*(signed char *)(t6 + 0x1)) * (short)0x3938)))) * 100.0f);
                        (((struct o8C_float *)(t7))->v) = 0.5f;
                        (((struct o88_float *)(t7))->v) = 0.5f;
                        (((struct o84_float *)(t7))->v) = 0.5f;
                        (((struct o68_uint *)(t7))->v) = (t6 + 0x64);
                        t7 = (((struct oC8_int *)(t6))->v);
                        *(unsigned char *)(t7) = 0x1;
                        (((struct o6_ushort *)(t7))->v) = 0x3F;
                        (((struct o70_float *)(t7))->v) = ((*(float *)((0xC535C24 + ((short)(*(signed char *)(t6 + 0x1)) * (short)0x3938)))) * 200.0f);
                        u0 = math_sin_angle16(((*(int *)((((short)(*(signed char *)(t6 + 0x1)) * (short)0x2F8) + 0xC5413E8))) + 0x3000));
                        (((struct o6C_float *)(t7))->v) = (u0 * 80.0f);
                        u0 = math_cos_angle16(((*(int *)((((short)(*(signed char *)(t6 + 0x1)) * (short)0x2F8) + 0xC5413E8))) + 0x3000));
                        (((struct o74_float *)(t7))->v) = (u0 * 80.0f);
                        (((struct o8C_float *)(t7))->v) = 0.5f;
                        (((struct o88_float *)(t7))->v) = 0.5f;
                        (((struct o84_float *)(t7))->v) = 0.5f;
                        (((struct o68_uint *)(t7))->v) = (t6 + 0x64);
                        t4 = 0x68;
                    }
                    t5 = t4;
                }
                t3 = t5;
            }
                break;
            case 16:
            {
                t4 = FUN_0c037320(0x18, t1);
                t5 = t4;
                if ((int)t4 < 0) {
                } else {
                    t6 = ((int (*)(int, int, int))(FUN_0c03f444))(0x5, 0x0, 0x1);
                    t7 = t6;
                    if (t6 == 0) {
                    } else {
                        (((struct o1_uchar *)(t6))->v) = (*(signed char *)(a4 + 0x1));
                        (((struct o2_uchar *)(t6))->v) = a6;
                        (((struct o4_uint *)(t6))->v) = 0xC15BE1E;
                        (((struct oA8_uchar *)(t6))->v) = 0x1;
                        (((struct oAC_ushort *)(t6))->v) = 0xF;
                        (((struct oA9_uchar *)(t6))->v) = 0x21;
                        (((struct o10_uint *)(t6))->v) = a4;
                        (((struct o1C_ushort *)(t6))->v) = t4;
                        (((struct o1E_ushort *)(t6))->v) = 0x0;
                        (((struct o20_ushort *)(t6))->v) = 0x0;
                        (((struct o22_ushort *)(t6))->v) = ((((struct o24_short *)(a4))->v));
                        (((struct o2C_float *)(t6))->v) = 0.0f;
                        (((struct o30_float *)(t6))->v) = 0.0f;
                        (((struct o28_float *)(t6))->v) = 0.0f;
                        t4 = (((struct oC4_int *)(t6))->v);
                        FUN_0c03744a(t4, 0x0, 0x18, ((((struct o0_int *)0xC4B40CC)->v)));
                        *(unsigned char *)(t4) = 0x1;
                        (((struct o6_ushort *)(t4))->v) = 0x3F;
                        (((struct o8C_float *)(t4))->v) = 0.400000006f;
                        (((struct o88_float *)(t4))->v) = 0.400000006f;
                        (((struct o84_float *)(t4))->v) = 0.400000006f;
                        (((struct o68_uint *)(t4))->v) = (((((struct oC4_int *)(a4))->v)) + 0x28);
                        (((struct o74_float *)(t4))->v) = 0.0f;
                        (((struct o6C_float *)(t4))->v) = 0.0f;
                        (((struct o70_float *)(t4))->v) = 35.0f;
                        t7 = 0x70;
                    }
                    t5 = t7;
                }
                t3 = t5;
            }
                break;
            case 18:
            {
                t4 = FUN_0c037320(0x27, t1);
                t5 = t4;
                if ((int)t4 < 0) {
                } else {
                    t4 = ((int (*)(int, int, int))(FUN_0c03f444))(0x5, 0x0, 0x1);
                    t6 = t4;
                    if (t4 == 0) {
                    } else {
                        (((struct o1_uchar *)(t4))->v) = (*(signed char *)(a4 + 0x1));
                        (((struct o2_uchar *)(t4))->v) = a6;
                        (((struct o4_uint *)(t4))->v) = 0xC15BEBC;
                        (((struct oA8_uchar *)(t4))->v) = 0x1;
                        (((struct oAC_ushort *)(t4))->v) = 0xF;
                        (((struct oA9_uchar *)(t4))->v) = 0x21;
                        (((struct o10_uint *)(t4))->v) = a4;
                        (((struct o22_ushort *)(t4))->v) = ((((struct o24_short *)(a4))->v));
                        (((struct o2C_float *)(t4))->v) = 0.0f;
                        (((struct o30_float *)(t4))->v) = 0.0f;
                        (((struct o28_float *)(t4))->v) = 0.0f;
                        t7 = (((struct oC4_int *)(t4))->v);
                        FUN_0c03744a(t7, 0x0, 0x27, ((((struct o0_int *)0xC4B40CC)->v)));
                        *(unsigned char *)(t7) = 0x1;
                        (((struct o6_ushort *)(t7))->v) = 0x1F;
                        (((struct o8C_float *)(t7))->v) = 1.0f;
                        (((struct o88_float *)(t7))->v) = 1.0f;
                        (((struct o84_float *)(t7))->v) = 1.0f;
                        (((struct o68_uint *)(t7))->v) = (((((struct oC4_int *)(a4))->v)) + 0x28);
                        (((struct o74_float *)(t7))->v) = 0.0f;
                        (((struct o6C_float *)(t7))->v) = 0.0f;
                        (((struct o70_float *)(t7))->v) = 40.0f;
                        t6 = 0x70;
                    }
                    t5 = t6;
                }
                t3 = t5;
            }
                break;
            case 20:
            {
                t4 = FUN_0c037320(0x1C, t0);
                t5 = t4;
                if ((int)t4 < 0) {
                } else {
                    t4 = ((int (*)(int, int, int))(FUN_0c03f444))(0x5, 0x0, 0x3);
                    t6 = t4;
                    if (t4 != 0) {
                        (((struct o1_uchar *)(t4))->v) = (*(signed char *)(a4 + 0x1));
                        (((struct o2_uchar *)(t4))->v) = a6;
                        (((struct o4_uint *)(t4))->v) = 0xC15BF56;
                        (((struct oA8_uchar *)(t4))->v) = 0x1;
                        (((struct oAC_ushort *)(t4))->v) = 0x1F;
                        (((struct oA9_uchar *)(t4))->v) = 0x21;
                        (((struct o48_float *)(t4))->v) = 1.0f;
                        (((struct o44_float *)(t4))->v) = 1.0f;
                        (((struct o40_float *)(t4))->v) = 1.0f;
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(t4 + 0x28) = *(struct mv3 *)(a5); }
                        (((struct o1C_ushort *)(t4))->v) = 0x7;
                        t7 = 0xC15CDF4;
                        t8 = 0x0;
                        t9 = a4;
                        for (;;) {
                            if ((unsigned int)t8 >= (unsigned int)0xC) {
                                break;
                            }
                            t9 = (*(int *)((((0xC4 + t4) + t8) + 0x0)));
                            t7 = (FUN_0c03744a(t9, 0x1, 0x1C, ((((struct oC_int *)0xC4B40CC)->v))));
                            *(unsigned char *)(t9) = 0x1;
                            (((struct o6_ushort *)(t9))->v) = 0x3F;
                            (((struct o6C_float *)(t9))->v) = 0.0f;
                            (((struct o74_float *)(t9))->v) = 0.0f;
                            (((struct o70_float *)(t9))->v) = (*(float *)((0xC15CDFC + 0x0)));
                            t7 = (nlRand());
                            u0 = ((((float)(t7 % 0x4)) / 10.0f) + (*(float *)((0xC15CE00 + 0x0))));
                            (((struct o8C_float *)(t9))->v) = u0;
                            t7 = (0x8C - 4);
                            *(float *)((t9 + t7)) = u0;
                            *(float *)((t9 + (t7 - 4))) = u0;
                            t7 = (nlRand());
                            (((struct o18_float *)(t9))->v) = ((((float)((int)((int)t7 % (int)0x28))) + -20.0f) / 4.0f);
                            t7 = (nlRand());
                            u1 = *(float *)((0xC15CE08 + 0x0));
                            (((struct o1C_float *)(t9))->v) = (((float)((int)((int)t7 % (int)0xA))) + u1);
                            t7 = (nlRand());
                            t10 = ((int)((int)t7 % (int)0x28));
                            t7 = 0x20;
                            t8 = (t8 + 0x4);
                            u0 = ((((float)t10) + -20.0f) / 4.0f);
                            *(float *)((t9 + 0x20)) = u0;
                        }
                        t6 = t7;
                    }
                    t5 = t6;
                }
                t3 = t5;
            }
                break;
            case 22:
            case 24:
            {
                t4 = ((int (*)(int, int, int, int))(FUN_0c03f444))(0x5, 0x0, 0x2, a7);
                t5 = t4;
                if (t4 == 0) {
                } else {
                    (((struct o1_uchar *)(t4))->v) = (*(signed char *)(a4 + 0x1));
                    (((struct o2_uchar *)(t4))->v) = a6;
                    (((struct o4_uint *)(t4))->v) = 0xC15BFF8;
                    (((struct oA8_uchar *)(t4))->v) = 0x1;
                    (((struct oAC_ushort *)(t4))->v) = 0xF;
                    (((struct oA9_uchar *)(t4))->v) = 0x21;
                    (((struct o10_uint *)(t4))->v) = a4;
                    (((struct o1C_ushort *)(t4))->v) = 0x0;
                    (((struct o1E_ushort *)(t4))->v) = 0x0;
                    (((struct o20_ushort *)(t4))->v) = 0xF;
                    thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)(t4 + 0x1)) * (short)0x3938) + 0xC532564))) + 0x28), (t4 + 0x28));
                    t6 = (((struct oC4_int *)(t4))->v);
                    FUN_0c03744a(t6, 0x0, 0x12, ((((struct o0_int *)0xC4B40CC)->v)));
                    *(unsigned char *)(t6) = 0x1;
                    (((struct o6_ushort *)(t6))->v) = 0x3F;
                    (((struct o8C_float *)(t6))->v) = 0.0f;
                    (((struct o88_float *)(t6))->v) = 0.0f;
                    (((struct o84_float *)(t6))->v) = 0.0f;
                    (((struct o74_float *)(t6))->v) = 0.0f;
                    (((struct o70_float *)(t6))->v) = 0.0f;
                    (((struct o6C_float *)(t6))->v) = 0.0f;
                    t5 = 0x6C;
                }
                t3 = t5;
            }
                break;
            case 26:
            {
                t4 = FUN_0c037320(0x71, t0);
                t0 = t4;
                if ((int)t4 < 0) {
                } else {
                    t5 = ((int (*)(int, int, int))(FUN_0c03f444))(0x5, 0x0, t4);
                    t4 = t5;
                    if (t5 == 0) {
                    } else {
                        (((struct o1_uchar *)(t5))->v) = (*(signed char *)(a4 + 0x1));
                        (((struct o2_uchar *)(t5))->v) = a6;
                        (((struct o4_uint *)(t5))->v) = 0xC15BB04;
                        (((struct oA8_uchar *)(t5))->v) = 0x1;
                        (((struct oAC_ushort *)(t5))->v) = 0x1F;
                        (((struct oA9_uchar *)(t5))->v) = 0x21;
                        (((struct o10_uint *)(t5))->v) = a4;
                        u0 = *(float *)((0xC535C24 + ((short)(*(signed char *)(t5 + 0x1)) * (short)0x3938)));
                        (((struct o48_float *)(t5))->v) = (u0 * 0.550000012f);
                        (((struct o44_float *)(t5))->v) = (u0 * 0.550000012f);
                        (((struct o40_float *)(t5))->v) = (u0 * 0.550000012f);
                        (((struct oA4_uint *)(t5))->v) = ((*(int *)((0xC5325A4 + ((short)(*(signed char *)(a4 + 0x1)) * (short)0x3938)))) + 0x28);
                        FUN_0c03733c(t5, 0x71, ((((struct oC_int *)0xC4B40CC)->v)));
                        t6 = (((struct oC4_int *)(t5))->v);
                        *(unsigned char *)(t6) = 0x1;
                        (((struct o6_ushort *)(t6))->v) = 0xF;
                        (((struct o74_float *)(t6))->v) = 0.0f;
                        (((struct o70_float *)(t6))->v) = 0.0f;
                        (((struct o6C_float *)(t6))->v) = 0.0f;
                        (((struct o30_float *)(t5))->v) = 0.0f;
                        (((struct o28_float *)(t5))->v) = 0.0f;
                        (((struct o2C_float *)(t5))->v) = -35.0f;
                        t4 = 0x2C;
                    }
                    t0 = t4;
                }
                t3 = t0;
            }
                break;
            default:
            {
                t0 = FUN_0c037320(0x2B, t1);
                t1 = t0;
                if ((int)t0 >= 0) {
                    t0 = ((int (*)(int, int, int))(FUN_0c03f444))(0x5, 0x0, 0x1);
                    t4 = t0;
                    if (t0 != 0) {
                        (((struct o1_uchar *)(t0))->v) = (*(signed char *)(a4 + 0x1));
                        (((struct o2_uchar *)(t0))->v) = a6;
                        (((struct o4_uint *)(t0))->v) = 0xC15C1C0;
                        (((struct oA8_uchar *)(t0))->v) = 0x0;
                        (((struct oAC_ushort *)(t0))->v) = 0x23F;
                        (((struct oA9_uchar *)(t0))->v) = 0x21;
                        (((struct o10_uint *)(t0))->v) = a4;
                        (((struct oB4_float *)(t0))->v) = 1.0f;
                        (((struct oB8_float *)(t0))->v) = 0.300000012f;
                        (((struct oBC_float *)(t0))->v) = 0.300000012f;
                        u0 = (((struct o378C_float *)(a4))->v);
                        (((struct o48_float *)(t0))->v) = (u0 * 1.0f);
                        (((struct o44_float *)(t0))->v) = (u0 * 1.0f);
                        (((struct o40_float *)(t0))->v) = (u0 * 1.0f);
                        (((struct o1C_ushort *)(t0))->v) = 0x0;
                        t5 = (((struct oC4_int *)(t0))->v);
                        FUN_0c03744a(t5, 0x0, 0x2B, ((((struct o0_int *)0xC4B40CC)->v)));
                        *(unsigned char *)(t5) = 0x1;
                        (((struct o6_ushort *)(t5))->v) = 0xF;
                        (((struct o70_float *)(t5))->v) = 0.0f;
                        (((struct o74_float *)(t5))->v) = 0.0f;
                        (((struct o6C_float *)(t5))->v) = 0.0f;
                        (((struct o8C_float *)(t5))->v) = 1.0f;
                        (((struct o88_float *)(t5))->v) = 1.0f;
                        (((struct o84_float *)(t5))->v) = 1.0f;
                        t4 = 0x84;
                    }
                    t1 = t4;
                }
                t3 = t1;
            }
                break;
        }
        t2 = t3;
    }
    return t2;
}
