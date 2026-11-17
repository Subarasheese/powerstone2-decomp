/* game/unsorted: functions 0C15C344-0C15D026, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

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
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oC_int { char p[0xC]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int thunk_FUN_0c058310(int, int);
float math_cos_angle16(int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
extern int FUN_0c187798();
int FUN_0c15c344(int a4, int a5, int a6, float f4);

int FUN_0c15c344(int a4, int a5, int a6, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register float u0;
    register float u1;

    t3 = (((struct oC_int *)0xC4B40CC)->v);
    t4 = (((struct o0_int *)0xC4B40CC)->v);
    t5 = a6;
    if ((unsigned int)a6 >= (unsigned int)0xF) {
    } else {
        switch ((a6 << 1)) {
            case 0:
            {
                t6 = FUN_0c037320(0x1C, t3);
                t7 = t6;
                if ((int)t6 < 0) {
                } else {
                    t6 = FUN_0c03f444(0x5, 0x0, 0x3);
                    t8 = t6;
                    if (t6 != 0) {
                        *(unsigned char *)(((t6 + 0x1) + 0x0)) = (*(signed char *)((a4 + 0x1)));
                        *(unsigned char *)((t6 + 0x2)) = a6;
                        *(unsigned int *)((t6 + 0x4)) = 0xC15B5B4;
                        (((struct oA8_uchar *)(t6))->v) = 0x1;
                        (((struct oAC_ushort *)(t6))->v) = 0x1F;
                        (((struct oA9_uchar *)(t6))->v) = 0x21;
                        (((struct o48_float *)(t6))->v) = 1.0f;
                        (((struct o44_float *)(t6))->v) = 1.0f;
                        (((struct o40_float *)(t6))->v) = 1.0f;
                        t9 = ((int (*)(int))(FUN_0c187798))(t6);
                        *(unsigned short *)((t0 + 0x1C)) = 0x1E;
                        t0 = 0xC15C504;
                        t9 = 0x0;
                        t10 = a4;
                        for (;;) {
                            if ((unsigned int)t9 >= (unsigned int)0xC) {
                                break;
                            }
                            t10 = 0xC4;
                            t0 = t6;
                            t10 = (t10 + t0);
                            t10 = (t10 + t9);
                            t10 = (*(int *)((t10 + 0x0)));
                            t0 = (FUN_0c03744a(t10, 0x1, 0x1C, ((((struct oC_int *)0xC4B40CC)->v))));
                            t0 = 0x3F;
                            *(unsigned char *)((t10 + 0x0)) = 0x1;
                            *(unsigned short *)((t10 + 0x6)) = t0;
                            t0 = 0x6C;
                            *(float *)((t10 + t0)) = 0.0f;
                            t0 = 0x74;
                            *(float *)((t10 + t0)) = 0.0f;
                            t0 = 0x70;
                            *(float *)((t10 + t0)) = 60.0f;
                            t0 = (FUN_0c179ac0());
                            if ((int)t0 >= 0) {
                                t0 = (t0 & 0x3);
                            } else {
                                t0 = (~t0);
                                t0 = (t0 + 0x1);
                                t0 = (t0 & 0x3);
                                t0 = (~t0);
                                t0 = (t0 + 0x1);
                            }
                            t11 = t0;
                            t0 = 0xC15C50C;
                            u0 = (*(float *)((t0 + 0x0)));
                            t0 = 0x8C;
                            u1 = (float)t11;
                            u1 = (u1 / 10.0f);
                            u1 = (u1 + u0);
                            *(float *)((t10 + t0)) = u1;
                            t0 = (t0 - 4);
                            *(float *)((t10 + t0)) = u1;
                            t0 = (t0 - 4);
                            *(float *)((t10 + t0)) = u1;
                            t0 = (FUN_0c179ac0());
                            t11 = t0;
                            t0 = 0x28;
                            t0 = ((int)((int)t11 % (int)t0));
                            t11 = t0;
                            t0 = 0xC15C514;
                            u0 = (*(float *)((t0 + 0x0)));
                            t0 = 0x18;
                            u1 = (float)t11;
                            u1 = (u1 + -20.0f);
                            u1 = (u1 / u0);
                            *(float *)((t10 + t0)) = u1;
                            t0 = (FUN_0c179ac0());
                            t11 = t0;
                            t0 = 0xA;
                            t0 = ((int)((int)t11 % (int)t0));
                            t11 = t0;
                            t0 = 0x1C;
                            u1 = (float)t11;
                            u1 = (u1 + 10.0f);
                            *(float *)((t10 + t0)) = u1;
                            t0 = (FUN_0c179ac0());
                            t11 = t0;
                            t0 = 0x28;
                            t0 = ((int)((int)t11 % (int)t0));
                            t11 = t0;
                            t0 = 0xC15C514;
                            u0 = (*(float *)((t0 + 0x0)));
                            t0 = 0x20;
                            t9 = (t9 + 0x4);
                            u1 = (float)t11;
                            u1 = (u1 + -20.0f);
                            u1 = (u1 / u0);
                            *(float *)((t10 + t0)) = u1;
                        }
                        t8 = t0;
                    }
                    t7 = t8;
                }
                t0 = t7;
            }
                break;
            case 2:
            {
                t6 = FUN_0c037320(0x1D, t3);
                t7 = t6;
                if ((int)t6 < 0) {
                } else {
                    t6 = FUN_0c03f444(0x5, 0x0, 0x3);
                    t8 = t6;
                    if (t6 != 0) {
                        *(unsigned char *)(((t6 + 0x1) + 0x0)) = (*(signed char *)((a4 + 0x1)));
                        *(unsigned char *)((t6 + 0x2)) = a6;
                        *(unsigned int *)((t6 + 0x4)) = 0xC15B65C;
                        (((struct oA8_uchar *)(t6))->v) = 0x1;
                        (((struct oAC_ushort *)(t6))->v) = 0x1F;
                        (((struct oA9_uchar *)(t6))->v) = 0x21;
                        (((struct o48_float *)(t6))->v) = 1.0f;
                        (((struct o44_float *)(t6))->v) = 1.0f;
                        (((struct o40_float *)(t6))->v) = 1.0f;
                        t9 = ((int (*)(int))(FUN_0c187798))(t6);
                        *(unsigned short *)((t1 + 0x1C)) = 0x0;
                        t1 = 0x0;
                        t9 = 0x0;
                        t10 = a4;
                        for (;;) {
                            if ((unsigned int)t9 >= (unsigned int)0xC) {
                                break;
                            }
                            t10 = 0xC4;
                            t1 = t6;
                            t10 = (t10 + t1);
                            t10 = (t10 + t9);
                            t10 = (*(int *)((t10 + 0x0)));
                            t1 = (FUN_0c03744a(t10, 0x1, 0x1D, ((((struct oC_int *)0xC4B40CC)->v))));
                            t1 = 0x1F;
                            *(unsigned char *)((t10 + 0x0)) = 0x1;
                            *(unsigned short *)((t10 + 0x6)) = t1;
                            t1 = 0x70;
                            *(float *)((t10 + t1)) = 0.0f;
                            t1 = 0x74;
                            *(float *)((t10 + t1)) = 0.0f;
                            t1 = 0x6C;
                            *(float *)((t10 + t1)) = 0.0f;
                            t1 = (FUN_0c179ac0());
                            if ((int)t1 >= 0) {
                                t1 = (t1 & 0x3);
                            } else {
                                t1 = (~t1);
                                t1 = (t1 + 0x1);
                                t1 = (t1 & 0x3);
                                t1 = (~t1);
                                t1 = (t1 + 0x1);
                            }
                            t11 = t1;
                            t1 = 0xC15C640;
                            u0 = *(float *)((t1 + 0x0));
                            t1 = 0x8C;
                            u1 = (float)t11;
                            u1 = (u1 / 10.0f);
                            u1 = (u1 + u0);
                            *(float *)((t10 + t1)) = u1;
                            t1 = (t1 - 4);
                            *(float *)((t10 + t1)) = u1;
                            t1 = (t1 - 4);
                            *(float *)((t10 + t1)) = u1;
                            t1 = (FUN_0c179ac0());
                            t11 = t1;
                            t1 = 0x28;
                            t1 = ((int)((int)t11 % (int)t1));
                            t11 = t1;
                            t1 = 0x18;
                            u1 = (float)t11;
                            u1 = (u1 + -20.0f);
                            u1 = (u1 / 10.0f);
                            *(float *)((t10 + t1)) = u1;
                            t1 = (FUN_0c179ac0());
                            t11 = t1;
                            t1 = 0x28;
                            t1 = ((int)((int)t11 % (int)t1));
                            t11 = t1;
                            t1 = 0x1C;
                            u1 = (float)t11;
                            u1 = (u1 + -20.0f);
                            u1 = (u1 / 10.0f);
                            *(float *)((t10 + t1)) = u1;
                            t1 = (FUN_0c179ac0());
                            t11 = t1;
                            t1 = 0xF;
                            t1 = ((int)((int)t11 % (int)t1));
                            t11 = t1;
                            t1 = 0x20;
                            t9 = (t9 + 0x4);
                            u1 = (float)t11;
                            u1 = (u1 + 10.0f);
                            *(float *)((t10 + t1)) = u1;
                        }
                        t8 = t1;
                    }
                    t7 = t8;
                }
                t0 = t7;
            }
                break;
            case 4:
            {
                t1 = FUN_0c037320(0x2E, t4);
                t6 = t1;
                if ((int)t1 < 0) {
                } else {
                    t1 = FUN_0c03f444(0x5, 0x0, 0x1);
                    t7 = t1;
                    if (t1 == 0) {
                    } else {
                        *(unsigned char *)((t1 + 0x1)) = (*(signed char *)((a4 + 0x1)));
                        *(unsigned char *)((t1 + 0x2)) = a6;
                        *(unsigned int *)((t1 + 0x4)) = 0xC15B758;
                        (((struct oA8_uchar *)(t1))->v) = 0x0;
                        (((struct oAC_ushort *)(t1))->v) = 0x3F;
                        (((struct oA9_uchar *)(t1))->v) = 0x21;
                        *(unsigned int *)((t1 + 0x10)) = a4;
                        u0 = (((struct o378C_float *)(a4))->v);
                        (((struct o48_float *)(t1))->v) = (u0 * 1.5f);
                        (((struct o44_float *)(t1))->v) = (u0 * 1.5f);
                        (((struct o40_float *)(t1))->v) = (u0 * 1.5f);
                        *(unsigned short *)((t1 + 0x1C)) = 0x0;
                        t8 = (((struct oC4_int *)(t1))->v);
                        FUN_0c03744a(t8, 0x0, 0x2E, ((((struct o0_int *)0xC4B40CC)->v)));
                        *(unsigned char *)((t8 + 0x0)) = 0x1;
                        *(unsigned short *)((t8 + 0x6)) = 0xF;
                        (((struct o70_float *)(t8))->v) = 0.0f;
                        (((struct o74_float *)(t8))->v) = 0.0f;
                        (((struct o6C_float *)(t8))->v) = 0.0f;
                        (((struct o8C_float *)(t8))->v) = 1.0f;
                        (((struct o88_float *)(t8))->v) = 1.0f;
                        (((struct o84_float *)(t8))->v) = 1.0f;
                        t7 = 0x84;
                    }
                    t6 = t7;
                }
                t0 = t6;
            }
                break;
            case 6:
            {
                t1 = FUN_0c037320(0x13, t4);
                t6 = t1;
                if ((int)t1 < 0) {
                } else {
                    t1 = FUN_0c03f444(0x5, 0x0, 0x1);
                    t7 = t1;
                    if (t1 == 0) {
                    } else {
                        *(unsigned char *)((t1 + 0x1)) = (*(signed char *)((a4 + 0x1)));
                        *(unsigned char *)((t1 + 0x2)) = a6;
                        *(unsigned int *)((t1 + 0x4)) = 0xC15B91C;
                        (((struct oA8_uchar *)(t1))->v) = 0x1;
                        (((struct oAC_ushort *)(t1))->v) = 0x3F;
                        (((struct oA9_uchar *)(t1))->v) = 0x21;
                        *(unsigned int *)((t1 + 0x10)) = a4;
                        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((t1 + 0x1))) * (short)0x3938) + 0xC532564))) + 0x28), (t1 + 0x28));
                        u0 = (((struct o378C_float *)(a4))->v);
                        (((struct o48_float *)(t1))->v) = (u0 * 1.5f);
                        (((struct o44_float *)(t1))->v) = (u0 * 1.5f);
                        (((struct o40_float *)(t1))->v) = (u0 * 1.5f);
                        *(unsigned short *)((t1 + 0x1C)) = 0x0;
                        *(unsigned short *)((t1 + 0x1E)) = 0x0;
                        t8 = (((struct oC4_int *)(t1))->v);
                        FUN_0c03744a(t8, 0x0, 0x13, ((((struct o0_int *)0xC4B40CC)->v)));
                        *(unsigned char *)((t8 + 0x0)) = 0x1;
                        *(unsigned short *)((t8 + 0x6)) = 0xF;
                        (((struct o70_float *)(t8))->v) = 0.0f;
                        (((struct o74_float *)(t8))->v) = 0.0f;
                        (((struct o6C_float *)(t8))->v) = 0.0f;
                        (((struct o8C_float *)(t8))->v) = 1.0f;
                        (((struct o88_float *)(t8))->v) = 1.0f;
                        (((struct o84_float *)(t8))->v) = 1.0f;
                        t7 = 0x84;
                    }
                    t6 = t7;
                }
                t0 = t6;
            }
                break;
            case 8:
            {
                t1 = FUN_0c037320(0x2A, t4);
                t6 = t1;
                if ((int)t1 < 0) {
                } else {
                    t1 = FUN_0c03f444(0x5, 0x0, 0x1);
                    t7 = t1;
                    if (t1 == 0) {
                    } else {
                        *(unsigned char *)((t1 + 0x1)) = (*(signed char *)((a4 + 0x1)));
                        *(unsigned char *)((t1 + 0x2)) = a6;
                        *(unsigned int *)((t1 + 0x4)) = 0xC15BA84;
                        (((struct oA8_uchar *)(t1))->v) = 0x1;
                        (((struct oAC_ushort *)(t1))->v) = 0xF;
                        (((struct oA9_uchar *)(t1))->v) = 0x21;
                        *(unsigned int *)((t1 + 0x10)) = a4;
                        (((struct o30_float *)(t1))->v) = 0.0f;
                        (((struct o2C_float *)(t1))->v) = 0.0f;
                        (((struct o28_float *)(t1))->v) = 0.0f;
                        (((struct o48_float *)(t1))->v) = 1.0f;
                        (((struct o44_float *)(t1))->v) = 1.0f;
                        (((struct o40_float *)(t1))->v) = 1.0f;
                        *(unsigned short *)((t1 + 0x1C)) = 0x0;
                        *(unsigned short *)((t1 + 0x1E)) = 0x0;
                        t8 = (((struct oC4_int *)(t1))->v);
                        FUN_0c03744a(t8, 0x0, 0x2A, ((((struct o0_int *)0xC4B40CC)->v)));
                        *(unsigned char *)((t8 + 0x0)) = 0x1;
                        *(unsigned short *)((t8 + 0x6)) = 0x21F;
                        (((struct o18_float *)(t8))->v) = 1.0f;
                        (((struct o1C_float *)(t8))->v) = 1.0f;
                        (((struct o20_float *)(t8))->v) = 1.0f;
                        (((struct o68_uint *)(t8))->v) = ((*(int *)((t1 + 0x10))) + 0x64);
                        (((struct o70_float *)(t8))->v) = 0.0f;
                        (((struct o6C_float *)(t8))->v) = 0.0f;
                        (((struct o74_float *)(t8))->v) = 10.0f;
                        u0 = 1.0f;
                        if ((unsigned char)(*(signed char *)((a4 + 0x41C))) == 37) {
                            u0 = 1.39999998f;
                        }
                        (((struct o8C_float *)(t8))->v) = u0;
                        (((struct o88_float *)(t8))->v) = u0;
                        (((struct o84_float *)(t8))->v) = u0;
                        t7 = 0x84;
                    }
                    t6 = t7;
                }
                t0 = t6;
            }
                break;
            case 10:
            {
                t1 = FUN_0c037320(0x34, t3);
                t6 = t1;
                if ((int)t1 < 0) {
                } else {
                    t7 = FUN_0c03f444(0x5, 0x0, t1);
                    t1 = t7;
                    if (t7 == 0) {
                    } else {
                        *(unsigned char *)((t7 + 0x1)) = (*(signed char *)((a4 + 0x1)));
                        *(unsigned char *)((t7 + 0x2)) = a6;
                        *(unsigned int *)((t7 + 0x4)) = 0xC15BB04;
                        (((struct oA8_uchar *)(t7))->v) = 0x1;
                        (((struct oAC_ushort *)(t7))->v) = 0x1F;
                        (((struct oA9_uchar *)(t7))->v) = 0x21;
                        *(unsigned int *)((t7 + 0x10)) = a4;
                        u0 = *(float *)((0xC535C24 + ((short)(*(signed char *)((t7 + 0x1))) * (short)0x3938)));
                        (((struct o48_float *)(t7))->v) = u0;
                        (((struct o44_float *)(t7))->v) = u0;
                        (((struct o40_float *)(t7))->v) = u0;
                        *(unsigned short *)((t7 + 0x1C)) = 0x0;
                        *(unsigned short *)((t7 + 0x1E)) = 0x0;
                        (((struct oA4_uint *)(t7))->v) = ((*(int *)((0xC5325A4 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938)))) + 0x28);
                        FUN_0c03733c(t7, 0x34, ((((struct oC_int *)0xC4B40CC)->v)));
                        t8 = (((struct oC4_int *)(t7))->v);
                        *(unsigned char *)((t8 + 0x0)) = 0x1;
                        *(unsigned short *)((t8 + 0x6)) = 0xF;
                        (((struct o74_float *)(t8))->v) = 0.0f;
                        (((struct o70_float *)(t8))->v) = 0.0f;
                        (((struct o6C_float *)(t8))->v) = 0.0f;
                        t8 = (((struct oC4_int *)(t7))->v);
                        (((struct o78_uint *)(t8))->v) = (((((struct o78_int *)(t8))->v)) - 14563);
                        t8 = (((struct oC8_int *)(t7))->v);
                        (((struct o78_uint *)(t8))->v) = (((((struct o78_int *)(t8))->v)) + 0x71C7);
                        (((struct o30_float *)(t7))->v) = 0.0f;
                        (((struct o28_float *)(t7))->v) = 0.0f;
                        (((struct o2C_float *)(t7))->v) = -30.0f;
                        t1 = 0x2C;
                    }
                    t6 = t1;
                }
                t0 = t6;
            }
                break;
            case 12:
            {
                t1 = FUN_0c037320(0x3F, t4);
                t6 = t1;
                if ((int)t1 < 0) {
                } else {
                    t7 = FUN_0c03f444(0x5, 0x0, t1);
                    t1 = t7;
                    if (t7 == 0) {
                    } else {
                        FUN_0c03733c(t7, 0x3F, ((((struct o0_int *)0xC4B40CC)->v)));
                        *(unsigned char *)((t7 + 0x1)) = (*(signed char *)((a4 + 0x1)));
                        *(unsigned char *)((t7 + 0x2)) = a6;
                        *(unsigned int *)((t7 + 0x4)) = 0xC15BC68;
                        (((struct oA8_uchar *)(t7))->v) = 0x1;
                        (((struct oAC_ushort *)(t7))->v) = 0x3F;
                        (((struct oA9_uchar *)(t7))->v) = 0x21;
                        *(unsigned int *)((t7 + 0x10)) = a4;
                        t8 = ((int (*)(void))(FUN_0c187798))();
                        (((struct o48_float *)(t7))->v) = 0.100000001f;
                        (((struct o44_float *)(t7))->v) = 0.100000001f;
                        (((struct o40_float *)(t7))->v) = 0.100000001f;
                        *(unsigned short *)((t7 + 0x1C)) = (((int)((int)(FUN_0c179ac0()) % (int)0x1E)) + 0x32);
                        *(unsigned short *)((t7 + 0x1E)) = 0x0;
                        t8 = (((struct oC4_int *)(t7))->v);
                        *(unsigned char *)((t8 + 0x0)) = 0x1;
                        *(unsigned short *)((t8 + 0x6)) = 0xF;
                        (((struct o18_float *)(t8))->v) = 1.0f;
                        (((struct o1C_float *)(t8))->v) = 1.0f;
                        (((struct o20_float *)(t8))->v) = 1.0f;
                        (((struct o74_float *)(t8))->v) = 0.0f;
                        (((struct o70_float *)(t8))->v) = 0.0f;
                        (((struct o6C_float *)(t8))->v) = 0.0f;
                        (((struct o8C_float *)(t8))->v) = 0.0f;
                        (((struct o88_float *)(t8))->v) = 0.0f;
                        (((struct o84_float *)(t8))->v) = 0.0f;
                        t1 = 0x84;
                    }
                    t6 = t1;
                }
                t0 = t6;
            }
                break;
            case 14:
            {
                t1 = FUN_0c037320(0x4A, t4);
                t6 = t1;
                if ((int)t1 < 0) {
                } else {
                    t7 = FUN_0c03f444(0x5, 0x0, t1);
                    t1 = t7;
                    if (t7 == 0) {
                    } else {
                        FUN_0c03733c(t7, 0x4A, ((((struct o0_int *)0xC4B40CC)->v)));
                        *(unsigned char *)((t7 + 0x1)) = (*(signed char *)((a4 + 0x1)));
                        *(unsigned char *)((t7 + 0x2)) = a6;
                        *(unsigned int *)((t7 + 0x4)) = 0xC15BD90;
                        (((struct oA8_uchar *)(t7))->v) = 0x1;
                        (((struct oAC_ushort *)(t7))->v) = 0xF;
                        (((struct oA9_uchar *)(t7))->v) = 0x21;
                        t8 = ((int (*)(void))(FUN_0c187798))();
                        (((struct o48_float *)(t7))->v) = 1.0f;
                        (((struct o44_float *)(t7))->v) = 1.0f;
                        (((struct o40_float *)(t7))->v) = 1.0f;
                        *(unsigned int *)((t7 + 0x10)) = a4;
                        *(unsigned short *)((t7 + 0x1C)) = 0x28;
                        *(unsigned short *)((t7 + 0x1E)) = 0x1E;
                        t8 = (((struct oC4_int *)(t7))->v);
                        *(unsigned char *)((t8 + 0x0)) = 0x0;
                        *(unsigned short *)((t8 + 0x6)) = 0x3F;
                        u0 = *(float *)((0xC535C24 + ((short)(*(signed char *)((t7 + 0x1))) * (short)0x3938)));
                        (((struct o70_float *)(t8))->v) = (u0 * 100.0f);
                        (((struct o8C_float *)(t8))->v) = 0.5f;
                        (((struct o88_float *)(t8))->v) = 0.5f;
                        (((struct o84_float *)(t8))->v) = 0.5f;
                        (((struct o68_uint *)(t8))->v) = (t7 + 0x64);
                        t8 = (((struct oC8_int *)(t7))->v);
                        *(unsigned char *)((t8 + 0x0)) = 0x1;
                        *(unsigned short *)((t8 + 0x6)) = 0x3F;
                        u0 = *(float *)((0xC535C24 + ((short)(*(signed char *)((t7 + 0x1))) * (short)0x3938)));
                        (((struct o70_float *)(t8))->v) = (u0 * 200.0f);
                        u0 = math_sin_angle16(((*(int *)((((short)(*(signed char *)((t7 + 0x1))) * (short)0x2F8) + 0xC5413E8))) + 0x3000));
                        (((struct o6C_float *)(t8))->v) = (u0 * 80.0f);
                        u0 = math_cos_angle16(((*(int *)((((short)(*(signed char *)((t7 + 0x1))) * (short)0x2F8) + 0xC5413E8))) + 0x3000));
                        (((struct o74_float *)(t8))->v) = (u0 * 80.0f);
                        (((struct o8C_float *)(t8))->v) = 0.5f;
                        (((struct o88_float *)(t8))->v) = 0.5f;
                        (((struct o84_float *)(t8))->v) = 0.5f;
                        (((struct o68_uint *)(t8))->v) = (t7 + 0x64);
                        t1 = 0x68;
                    }
                    t6 = t1;
                }
                t0 = t6;
            }
                break;
            case 16:
            {
                t1 = FUN_0c037320(0x18, t4);
                t6 = t1;
                if ((int)t1 < 0) {
                } else {
                    t7 = FUN_0c03f444(0x5, 0x0, 0x1);
                    t8 = t7;
                    if (t7 == 0) {
                    } else {
                        *(unsigned char *)((t7 + 0x1)) = (*(signed char *)((a4 + 0x1)));
                        *(unsigned char *)((t7 + 0x2)) = a6;
                        *(unsigned int *)((t7 + 0x4)) = 0xC15BE1E;
                        (((struct oA8_uchar *)(t7))->v) = 0x1;
                        (((struct oAC_ushort *)(t7))->v) = 0xF;
                        (((struct oA9_uchar *)(t7))->v) = 0x21;
                        *(unsigned int *)((t7 + 0x10)) = a4;
                        *(unsigned short *)((t7 + 0x1C)) = t1;
                        *(unsigned short *)((t7 + 0x1E)) = 0x0;
                        (((struct o20_ushort *)(t7))->v) = 0x0;
                        (((struct o22_ushort *)(t7))->v) = ((((struct o24_short *)(a4))->v));
                        (((struct o2C_float *)(t7))->v) = 0.0f;
                        (((struct o30_float *)(t7))->v) = 0.0f;
                        (((struct o28_float *)(t7))->v) = 0.0f;
                        t1 = (((struct oC4_int *)(t7))->v);
                        FUN_0c03744a(t1, 0x0, 0x18, ((((struct o0_int *)0xC4B40CC)->v)));
                        *(unsigned char *)((t1 + 0x0)) = 0x1;
                        *(unsigned short *)((t1 + 0x6)) = 0x3F;
                        (((struct o8C_float *)(t1))->v) = 0.400000006f;
                        (((struct o88_float *)(t1))->v) = 0.400000006f;
                        (((struct o84_float *)(t1))->v) = 0.400000006f;
                        (((struct o68_uint *)(t1))->v) = (((((struct oC4_int *)(a4))->v)) + 0x28);
                        (((struct o74_float *)(t1))->v) = 0.0f;
                        (((struct o6C_float *)(t1))->v) = 0.0f;
                        (((struct o70_float *)(t1))->v) = 35.0f;
                        t8 = 0x70;
                    }
                    t6 = t8;
                }
                t0 = t6;
            }
                break;
            case 18:
            {
                t1 = FUN_0c037320(0x27, t4);
                t6 = t1;
                if ((int)t1 < 0) {
                } else {
                    t1 = FUN_0c03f444(0x5, 0x0, 0x1);
                    t7 = t1;
                    if (t1 == 0) {
                    } else {
                        *(unsigned char *)((t1 + 0x1)) = (*(signed char *)((a4 + 0x1)));
                        *(unsigned char *)((t1 + 0x2)) = a6;
                        *(unsigned int *)((t1 + 0x4)) = 0xC15BEBC;
                        (((struct oA8_uchar *)(t1))->v) = 0x1;
                        (((struct oAC_ushort *)(t1))->v) = 0xF;
                        (((struct oA9_uchar *)(t1))->v) = 0x21;
                        *(unsigned int *)((t1 + 0x10)) = a4;
                        (((struct o22_ushort *)(t1))->v) = ((((struct o24_short *)(a4))->v));
                        (((struct o2C_float *)(t1))->v) = 0.0f;
                        (((struct o30_float *)(t1))->v) = 0.0f;
                        (((struct o28_float *)(t1))->v) = 0.0f;
                        t8 = (((struct oC4_int *)(t1))->v);
                        FUN_0c03744a(t8, 0x0, 0x27, ((((struct o0_int *)0xC4B40CC)->v)));
                        *(unsigned char *)((t8 + 0x0)) = 0x1;
                        *(unsigned short *)((t8 + 0x6)) = 0x1F;
                        (((struct o8C_float *)(t8))->v) = 1.0f;
                        (((struct o88_float *)(t8))->v) = 1.0f;
                        (((struct o84_float *)(t8))->v) = 1.0f;
                        (((struct o68_uint *)(t8))->v) = (((((struct oC4_int *)(a4))->v)) + 0x28);
                        (((struct o74_float *)(t8))->v) = 0.0f;
                        (((struct o6C_float *)(t8))->v) = 0.0f;
                        (((struct o70_float *)(t8))->v) = 40.0f;
                        t7 = 0x70;
                    }
                    t6 = t7;
                }
                t0 = t6;
            }
                break;
            case 20:
            {
                t1 = FUN_0c037320(0x1C, t3);
                t6 = t1;
                if ((int)t1 < 0) {
                } else {
                    t1 = FUN_0c03f444(0x5, 0x0, 0x3);
                    t7 = t1;
                    if (t1 != 0) {
                        *(unsigned char *)(((t1 + 0x1) + 0x0)) = (*(signed char *)((a4 + 0x1)));
                        *(unsigned char *)((t1 + 0x2)) = a6;
                        *(unsigned int *)((t1 + 0x4)) = 0xC15BF56;
                        (((struct oA8_uchar *)(t1))->v) = 0x1;
                        (((struct oAC_ushort *)(t1))->v) = 0x1F;
                        (((struct oA9_uchar *)(t1))->v) = 0x21;
                        (((struct o48_float *)(t1))->v) = 1.0f;
                        (((struct o44_float *)(t1))->v) = 1.0f;
                        (((struct o40_float *)(t1))->v) = 1.0f;
                        t8 = ((int (*)(int))(FUN_0c187798))(t1);
                        *(unsigned short *)((t2 + 0x1C)) = 0x7;
                        t2 = 0xC15CDF4;
                        t8 = 0x0;
                        t9 = a4;
                        for (;;) {
                            if ((unsigned int)t8 >= (unsigned int)0xC) {
                                break;
                            }
                            t9 = 0xC4;
                            t2 = t1;
                            t9 = (t9 + t2);
                            t9 = (t9 + t8);
                            t9 = (*(int *)((t9 + 0x0)));
                            t2 = (FUN_0c03744a(t9, 0x1, 0x1C, ((((struct oC_int *)0xC4B40CC)->v))));
                            t2 = 0x3F;
                            *(unsigned char *)((t9 + 0x0)) = 0x1;
                            *(unsigned short *)((t9 + 0x6)) = t2;
                            t2 = 0x6C;
                            *(float *)((t9 + t2)) = 0.0f;
                            t2 = 0x74;
                            *(float *)((t9 + t2)) = 0.0f;
                            t2 = 0xC15CDFC;
                            u0 = (*(float *)((t2 + 0x0)));
                            t2 = 0x70;
                            *(float *)((t9 + t2)) = u0;
                            t2 = (FUN_0c179ac0());
                            if ((int)t2 >= 0) {
                                t2 = (t2 & 0x3);
                            } else {
                                t2 = (~t2);
                                t2 = (t2 + 0x1);
                                t2 = (t2 & 0x3);
                                t2 = (~t2);
                                t2 = (t2 + 0x1);
                            }
                            t10 = t2;
                            t2 = 0xC15CE00;
                            u1 = *(float *)((t2 + 0x0));
                            t2 = 0x8C;
                            u0 = (float)t10;
                            u0 = (u0 / 10.0f);
                            u0 = (u0 + u1);
                            *(float *)((t9 + t2)) = u0;
                            t2 = (t2 - 4);
                            *(float *)((t9 + t2)) = u0;
                            t2 = (t2 - 4);
                            *(float *)((t9 + t2)) = u0;
                            t2 = (FUN_0c179ac0());
                            t10 = t2;
                            t2 = 0x28;
                            t2 = ((int)((int)t10 % (int)t2));
                            t10 = t2;
                            t2 = 0x18;
                            u0 = (float)t10;
                            u0 = (u0 + -20.0f);
                            u0 = (u0 / 4.0f);
                            *(float *)((t9 + t2)) = u0;
                            t2 = (FUN_0c179ac0());
                            t10 = t2;
                            t2 = 0xA;
                            t2 = ((int)((int)t10 % (int)t2));
                            t10 = t2;
                            t2 = 0xC15CE08;
                            u1 = *(float *)((t2 + 0x0));
                            t2 = 0x1C;
                            u0 = (float)t10;
                            u0 = (u0 + u1);
                            *(float *)((t9 + t2)) = u0;
                            t2 = (FUN_0c179ac0());
                            t10 = t2;
                            t2 = 0x28;
                            t2 = ((int)((int)t10 % (int)t2));
                            t10 = t2;
                            t2 = 0x20;
                            t8 = (t8 + 0x4);
                            u0 = (float)t10;
                            u0 = (u0 + -20.0f);
                            u0 = (u0 / 4.0f);
                            *(float *)((t9 + t2)) = u0;
                        }
                        t7 = t2;
                    }
                    t6 = t7;
                }
                t0 = t6;
            }
                break;
            case 22:
            case 24:
            {
                t1 = FUN_0c03f444(0x5, 0x0, 0x2);
                t2 = t1;
                if (t1 == 0) {
                } else {
                    *(unsigned char *)((t1 + 0x1)) = (*(signed char *)((a4 + 0x1)));
                    *(unsigned char *)((t1 + 0x2)) = a6;
                    *(unsigned int *)((t1 + 0x4)) = 0xC15BFF8;
                    (((struct oA8_uchar *)(t1))->v) = 0x1;
                    (((struct oAC_ushort *)(t1))->v) = 0xF;
                    (((struct oA9_uchar *)(t1))->v) = 0x21;
                    *(unsigned int *)((t1 + 0x10)) = a4;
                    *(unsigned short *)((t1 + 0x1C)) = 0x0;
                    *(unsigned short *)((t1 + 0x1E)) = 0x0;
                    (((struct o20_ushort *)(t1))->v) = 0xF;
                    thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((t1 + 0x1))) * (short)0x3938) + 0xC532564))) + 0x28), (t1 + 0x28));
                    t6 = (((struct oC4_int *)(t1))->v);
                    FUN_0c03744a(t6, 0x0, 0x12, ((((struct o0_int *)0xC4B40CC)->v)));
                    *(unsigned char *)((t6 + 0x0)) = 0x1;
                    *(unsigned short *)((t6 + 0x6)) = 0x3F;
                    (((struct o8C_float *)(t6))->v) = 0.0f;
                    (((struct o88_float *)(t6))->v) = 0.0f;
                    (((struct o84_float *)(t6))->v) = 0.0f;
                    (((struct o74_float *)(t6))->v) = 0.0f;
                    (((struct o70_float *)(t6))->v) = 0.0f;
                    (((struct o6C_float *)(t6))->v) = 0.0f;
                    t2 = 0x6C;
                }
                t0 = t2;
            }
                break;
            case 26:
            {
                t1 = FUN_0c037320(0x71, t3);
                t2 = t1;
                if ((int)t1 < 0) {
                } else {
                    t3 = FUN_0c03f444(0x5, 0x0, t1);
                    t1 = t3;
                    if (t3 == 0) {
                    } else {
                        *(unsigned char *)((t3 + 0x1)) = (*(signed char *)((a4 + 0x1)));
                        *(unsigned char *)((t3 + 0x2)) = a6;
                        *(unsigned int *)((t3 + 0x4)) = 0xC15BB04;
                        (((struct oA8_uchar *)(t3))->v) = 0x1;
                        (((struct oAC_ushort *)(t3))->v) = 0x1F;
                        (((struct oA9_uchar *)(t3))->v) = 0x21;
                        *(unsigned int *)((t3 + 0x10)) = a4;
                        u0 = *(float *)((0xC535C24 + ((short)(*(signed char *)((t3 + 0x1))) * (short)0x3938)));
                        (((struct o48_float *)(t3))->v) = (u0 * 0.550000012f);
                        (((struct o44_float *)(t3))->v) = (u0 * 0.550000012f);
                        (((struct o40_float *)(t3))->v) = (u0 * 0.550000012f);
                        (((struct oA4_uint *)(t3))->v) = ((*(int *)((0xC5325A4 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938)))) + 0x28);
                        FUN_0c03733c(t3, 0x71, ((((struct oC_int *)0xC4B40CC)->v)));
                        t6 = (((struct oC4_int *)(t3))->v);
                        *(unsigned char *)((t6 + 0x0)) = 0x1;
                        *(unsigned short *)((t6 + 0x6)) = 0xF;
                        (((struct o74_float *)(t6))->v) = 0.0f;
                        (((struct o70_float *)(t6))->v) = 0.0f;
                        (((struct o6C_float *)(t6))->v) = 0.0f;
                        (((struct o30_float *)(t3))->v) = 0.0f;
                        (((struct o28_float *)(t3))->v) = 0.0f;
                        (((struct o2C_float *)(t3))->v) = -35.0f;
                        t1 = 0x2C;
                    }
                    t2 = t1;
                }
                t0 = t2;
            }
                break;
            default:
            {
                t1 = FUN_0c037320(0x2B, t4);
                t2 = t1;
                if ((int)t1 >= 0) {
                    t1 = FUN_0c03f444(0x5, 0x0, 0x1);
                    t3 = t1;
                    if (t1 != 0) {
                        *(unsigned char *)((t1 + 0x1)) = (*(signed char *)((a4 + 0x1)));
                        *(unsigned char *)((t1 + 0x2)) = a6;
                        *(unsigned int *)((t1 + 0x4)) = 0xC15C1C0;
                        (((struct oA8_uchar *)(t1))->v) = 0x0;
                        (((struct oAC_ushort *)(t1))->v) = 0x23F;
                        (((struct oA9_uchar *)(t1))->v) = 0x21;
                        *(unsigned int *)((t1 + 0x10)) = a4;
                        (((struct oB4_float *)(t1))->v) = 1.0f;
                        (((struct oB8_float *)(t1))->v) = 0.300000012f;
                        (((struct oBC_float *)(t1))->v) = 0.300000012f;
                        u0 = (((struct o378C_float *)(a4))->v);
                        (((struct o48_float *)(t1))->v) = (u0 * 1.0f);
                        (((struct o44_float *)(t1))->v) = (u0 * 1.0f);
                        (((struct o40_float *)(t1))->v) = (u0 * 1.0f);
                        *(unsigned short *)((t1 + 0x1C)) = 0x0;
                        t4 = (((struct oC4_int *)(t1))->v);
                        FUN_0c03744a(t4, 0x0, 0x2B, ((((struct o0_int *)0xC4B40CC)->v)));
                        *(unsigned char *)((t4 + 0x0)) = 0x1;
                        *(unsigned short *)((t4 + 0x6)) = 0xF;
                        (((struct o70_float *)(t4))->v) = 0.0f;
                        (((struct o74_float *)(t4))->v) = 0.0f;
                        (((struct o6C_float *)(t4))->v) = 0.0f;
                        (((struct o8C_float *)(t4))->v) = 1.0f;
                        (((struct o88_float *)(t4))->v) = 1.0f;
                        (((struct o84_float *)(t4))->v) = 1.0f;
                        t3 = 0x84;
                    }
                    t2 = t3;
                }
                t0 = t2;
            }
                break;
        }
        t5 = t0;
    }
    return t5;
}
