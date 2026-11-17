/* game/system: functions 0C02CBCC-0C02DA3A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o0_ushort { unsigned short v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o1C_uchar { char p[0x1C]; unsigned char v; };
struct o1D_uchar { char p[0x1D]; unsigned char v; };
struct o1E_uchar { char p[0x1E]; unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o20_uchar { char p[0x20]; unsigned char v; };
struct o21_uchar { char p[0x21]; unsigned char v; };
struct o22_uchar { char p[0x22]; unsigned char v; };
struct o23_uchar { char p[0x23]; unsigned char v; };
struct o24_uchar { char p[0x24]; unsigned char v; };
struct o25_uchar { char p[0x25]; unsigned char v; };
struct o26_uchar { char p[0x26]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oB_uchar { char p[0xB]; unsigned char v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oE_uchar { char p[0xE]; unsigned char v; };
struct oF_uchar { char p[0xF]; unsigned char v; };
int FUN_0c176a90(int, int, int);
int FUN_0c177100(int, int);
int FUN_0c177140(void);
int FUN_0c177350(void);
int FUN_0c177380(int);
int FUN_0c1773a0(int);
int gfx_set_background_color(int, int, int);
int FUN_0c1779a0(void);
int gfx_set_border_color(int);
int FUN_0c177f10(int);
int FUN_0c177f20(int);
int FUN_0c178350(int, int, int, int);
int FUN_0c178950(void);
int FUN_0c1789b0(void);
int FUN_0c17a020(void);
int FUN_0c0e0580(void);
int gfx_set_fog_color(int);
int gfx_set_fog_density(int);
int thunk_FUN_0c2b5b00(int);
int nlInitMatrix(int, int);
extern int FUN_0c17da60();
int FUN_0c17db70(int);
int FUN_0c0dd310(void);
int FUN_0c17e310(int);
int FUN_0c17e340(int);
int FUN_0c17e370(int);
int nlObjPutInit(void);
int FUN_0c17ed10(int, int, int);
int FUN_0c182a58(int, int);
int FUN_0c182b04(void);
int FUN_0c182b6e(int);
int FUN_0c187a88(int, int, int);
int FUN_0c2ae9e4(void);
int gdFsFinish(void);
int FUN_0c2b1424(void);
int FUN_0c2b1622(void);
int syRtcFinish(void);
int sys_get_video_standard(void);
int syCfgExit(void);
int FUN_0c2b407e(void);
int FUN_0c2b49b0(void);
int FUN_0c02cbcc(int a4, int a5);
int FUN_0c02cc20(int a4);
int FUN_0c02cc90(int a4);
int FUN_0c02cd20(void);
int FUN_0c02cdcc(int a4);
int FUN_0c02cf88(void);
int FUN_0c02d05c(void);
int FUN_0c02d0b4(void);
int FUN_0c02d104(void);
int FUN_0c02d16c(void);
int FUN_0c02d1e8(int a4, int a5);
int FUN_0c02d208(void);
int sys_vsync_handler_install(int a4, int a5, int a6, int a7);
int FUN_0c02d294(int a4, int a5, int a6, int a7);
int FUN_0c02d446(void);
int FUN_0c02d478(void);
int FUN_0c02d498(void);
int FUN_0c02d4c4(void);
int FUN_0c02d4dc(void);
int FUN_0c02d54c(void);
int sys_shutdown_all(int a4, int a5, int a6, int a7);
int FUN_0c02d944(void);
int FUN_0c02d9f2(void);
int FUN_0c02da2e(void);

int FUN_0c02cbcc(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = 0xC83C620;
    t1 = 0x1D0C;
    t2 = 0xC2738B8;
    t3 = (((((a4 << 2) << 2) + a4) << 2) + 0xC83C620);
    t4 = 0x0;
    for (;;) {
        t5 = *(signed char *)((t2 + 0x3));
        if ((int)t5 <= (int)a5) {
            t1 = (*(int *)((t3 + 0x0)));
            t0 = 0x1;
            t0 = ((int)t0 << (int)t4);
            t1 = (t1 | t0);
            *(unsigned int *)((t3 + 0x0)) = t1;
        }
        t4 = (t4 + 0x1);
        t2 = (t2 + 0x34);
        if ((int)t4 > (int)0x1F) {
            t4 = 0x0;
            t3 = (t3 + 0x4);
        }
        if ((unsigned int)t2 > (unsigned int)0xC2755C4) {
            break;
        }
    }
    return t5;
}

int FUN_0c02cc20(int a4)
{
    register int t0;
    register int t1;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t10;

    t0 = 0x0;
    for (;;) {
        t1 = 0x0;
        for (;;) {
            t3 = ((((((((a4 << 2) << 2) + a4) << 2) + 0xC83C61C) + 0x14) + (t0 * 0x17)) + (t1 << 1));
            t4 = 0xC1C2308;
            t5 = 0x0;
            for (;;) {
                t6 = *(signed char *)((t4 + t1));
                t5 = (t5 + 0x1);
                t4 = (t4 + 0x7);
                *(unsigned char *)((t3 + 0x0)) = t6;
                t3 = (t3 + 0x1);
                if ((int)t5 >= (int)0x2) {
                    break;
                }
            }
            t10 = t1;
            t1 = (t1 + 0x1);
            if ((int)t1 >= (int)0x7) {
                break;
            }
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x2) {
            break;
        }
    }
    return t10;
}

int FUN_0c02cc90(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    *(unsigned char *)(((((((a4 << 2) << 2) + a4) << 2) + 0xC83C61C) + 0x0)) = 0x0;
    *(unsigned char *)(((((((a4 << 2) << 2) + a4) << 2) + 0xC83C61C) + 0x1)) = 0x0;
    FUN_0c02cbcc(a4, 0x2);
    FUN_0c02cc20(a4);
    t0 = ((((((a4 << 2) << 2) + a4) << 2) + 0xC83C61C) + 0x14);
    t1 = ((((((a4 << 2) << 2) + a4) << 2) + 0xC83C61C) + 0x14);
    t2 = 0x0;
    for (;;) {
        t3 = (t0 + 0xE);
        t4 = 0x0;
        for (;;) {
            t4 = (t4 + 0x1);
            *(unsigned char *)((t3 + 0x0)) = 0x0;
            t3 = (t3 + 0x1);
            if ((int)t4 >= (int)0x4) {
                break;
            }
        }
        t3 = (t1 + 0x12);
        t4 = 0x0;
        for (;;) {
            t4 = (t4 + 0x1);
            *(unsigned char *)((t3 + 0x0)) = 0x0;
            t3 = (t3 + 0x1);
            if ((int)t4 >= (int)0x5) {
                break;
            }
        }
        t2 = (t2 + 0x1);
        t1 = (t1 + 0x17);
        t0 = (t0 + 0x17);
        if ((int)t2 >= (int)0x2) {
            break;
        }
    }
    return 0x4;
}

int FUN_0c02cd20(void)
{
    register int t0;

    if ((unsigned short)(*(short *)0xC83C6A4) == 0xFFF) {
        if ((int)(*(signed char *)0xC542B8A) >= (int)0x1) {
            *(unsigned short *)0xC83C6A4 = ((*(short *)0xC83C6A4) | 0x8000);
        }
        if ((int)(*(signed char *)0xC542B8A) >= (int)0x2) {
            *(unsigned short *)0xC83C6A4 = ((*(short *)0xC83C6A4) | 0x4000);
        }
    }
    if (((unsigned short)(*(short *)0xC83C6A4) & 0x8000) != 0) {
        *(unsigned char *)0xC542B8A = 0x1;
    }
    if (((unsigned short)(*(short *)0xC83C6A4) & 0x4000) != 0) {
        *(unsigned char *)0xC542B8A = 0x2;
    }
    (((struct o6_uchar *)0xC5429AD)->v) = (*(signed char *)0xC83C6A7);
    (((struct o0_uchar *)0xC542A08)->v) = (*(signed char *)0xC83C6A6);
    (((struct o1E_uchar *)0xC5429AD)->v) = (*(signed char *)0xC83C6A8);
    t0 = *(signed char *)0xC83C6A9;
    (((struct o1B_uchar *)0xC5429AD)->v) = t0;
    (((struct o0_uchar *)0xC5429AD)->v) = t0;
    t0 = *(signed char *)0xC83C6AA;
    (((struct o1D_uchar *)0xC5429AD)->v) = t0;
    (((struct o1_uchar *)0xC5429AD)->v) = t0;
    (((struct o1_uchar *)0xC542A08)->v) = (*(signed char *)0xC83C6AB);
    (((struct o2_uchar *)0xC542A08)->v) = (*(signed char *)0xC83C6AC);
    (((struct o3_uchar *)0xC542A08)->v) = (*(signed char *)0xC83C6AD);
    (((struct o4_uchar *)0xC542A08)->v) = (*(signed char *)0xC83C6AE);
    t0 = *(signed char *)0xC83C6AF;
    (((struct o5_uchar *)0xC542A08)->v) = t0;
    return t0;
}

int FUN_0c02cdcc(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(signed char *)0xC83C61C;
    t1 = t0;
    if ((int)t0 < (int)(*(signed char *)0xC83C660)) {
        t1 = (*(signed char *)0xC83C660);
    }
    (((struct o0_uchar *)0xC542B8A)->v) = t1;
    *(unsigned char *)0xC5429B2 = t1;
    t0 = *(signed char *)0xC83C61D;
    t1 = t0;
    if ((int)(signed char)t0 < (int)(*(signed char *)0xC83C661)) {
        t1 = (*(signed char *)0xC83C661);
    }
    (((struct o1_uchar *)0xC542B8A)->v) = t1;
    t0 = 0x0;
    for (;;) {
        t1 = 0x0;
        for (;;) {
            *(unsigned char *)((((0xC5429D0 + (t0 << 1)) + t1) + 0x0)) = (*(signed char *)((t1 + (((((((a4 << 2) << 2) + a4) << 2) + 0xC83C61C) + 0x14) + (t0 << 1)))));
            *(unsigned char *)((((0xC5429D0 + (t0 << 1)) + t1) + 0xE)) = (*(signed char *)((t1 + (((((((a4 << 2) << 2) + a4) << 2) + 0xC83C61C) + 0x2B) + (t0 << 1)))));
            (((struct o1C_uchar *)(((0xC5429D0 + (t0 << 1)) + t1)))->v) = (*(signed char *)((t1 + ((((((((((a4 == 0)) ? 1 : 0) << 2) << 2) + (((a4 == 0)) ? 1 : 0)) << 2) + 0xC83C61C) + 0x14) + (t0 << 1)))));
            t2 = *(signed char *)((t1 + ((((((((((a4 == 0)) ? 1 : 0) << 2) << 2) + (((a4 == 0)) ? 1 : 0)) << 2) + 0xC83C61C) + 0x2B) + (t0 << 1))));
            t3 = (((0xC5429D0 + (t0 << 1)) + t1) + 0x2A);
            t1 = (t1 + 0x1);
            *(unsigned char *)((t3 + 0x0)) = t2;
            if ((int)t1 >= (int)0x2) {
                break;
            }
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x7) {
            break;
        }
    }
    t0 = 0x0;
    for (;;) {
        *(unsigned char *)(((0xC542367 + t0) + 0x0)) = (*(signed char *)(((((((((a4 << 2) << 2) + a4) << 2) + 0xC83C61C) + 0x22) + t0) + 0x0)));
        *(unsigned char *)(((0xC542367 + t0) + 0x4)) = (*(signed char *)((t0 + ((((((a4 << 2) << 2) + a4) << 2) + 0xC83C61C) + 0x39))));
        *(unsigned char *)(((0xC542367 + t0) + 0x8)) = (*(signed char *)((t0 + (((((((((a4 == 0)) ? 1 : 0) << 2) << 2) + (((a4 == 0)) ? 1 : 0)) << 2) + 0xC83C61C) + 0x22))));
        t1 = *(signed char *)((t0 + (((((((((a4 == 0)) ? 1 : 0) << 2) << 2) + (((a4 == 0)) ? 1 : 0)) << 2) + 0xC83C61C) + 0x39)));
        t2 = (0xC542367 + t0);
        t0 = (t0 + 0x1);
        *(unsigned char *)((t2 + 0xC)) = t1;
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    t0 = 0x0;
    for (;;) {
        *(unsigned char *)(((0xC54234A + t0) + 0x0)) = (*(signed char *)(((((((((a4 << 2) << 2) + a4) << 2) + 0xC83C61C) + 0x26) + t0) + 0x0)));
        *(unsigned char *)(((0xC54234A + t0) + 0x5)) = (*(signed char *)((t0 + ((((((a4 << 2) << 2) + a4) << 2) + 0xC83C61C) + 0x3D))));
        *(unsigned char *)(((0xC54234A + t0) + 0xA)) = (*(signed char *)((t0 + (((((((((a4 == 0)) ? 1 : 0) << 2) << 2) + (((a4 == 0)) ? 1 : 0)) << 2) + 0xC83C61C) + 0x26))));
        t1 = *(signed char *)((t0 + (((((((((a4 == 0)) ? 1 : 0) << 2) << 2) + (((a4 == 0)) ? 1 : 0)) << 2) + 0xC83C61C) + 0x3D)));
        t2 = (0xC54234A + t0);
        t0 = (t0 + 0x1);
        *(unsigned char *)((t2 + 0xF)) = t1;
        if ((int)t0 >= (int)0x5) {
            break;
        }
    }
    return t1;
}

int FUN_0c02cf88(void)
{
    int stk[5];
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t12;
    register int t14;
    register int t17;
    register int t31;
    register int t34;
    register int t42;

    *(unsigned int *)(((int)stk + 0)) = 0xC83C61C;
    t0 = 0x0;
    for (;;) {
        t1 = *(int *)(((0xC83C664 + t0) + 0x0));
        t2 = *(int *)(((0xC83C620 + t0) + 0x0));
        t3 = t0;
        t0 = (t0 + 0x4);
        *(unsigned int *)(((((int)stk + 0) + 0x4) + t3)) = (t2 | t1);
        if ((unsigned int)t0 >= (unsigned int)0x10) {
            break;
        }
    }
    t4 = 0xC543024;
    t5 = 0xC543024;
    t6 = (((int)stk + 0) + 0x4);
    t7 = 0x0;
    t8 = 0x0;
    for (;;) {
        if ((int)(*(signed char *)((((t8 * 0x34) + 0xC2738B8) + 0x3))) > (int)((*(signed char *)0xC5429B3) + 0x2)) {
            t12 = *(signed char *)0xC542A08;
            if (t12 != 0) {
                if ((((int)0x1 << (int)t7) & (*(int *)((t6 + 0x0)))) != 0) {
                    t14 = *(signed char *)((((t8 * 0x34) + 0xC2738B8) + 0x1));
                    if ((int)t14 >= 0) {
                        t17 = *(signed char *)((((t8 * 0x34) + 0xC2738B8) + 0x10));
                        if (t17 != 7) {
                            t42 = *(signed char *)((((t8 * 0x34) + 0xC2738B8) + 0x10));
                            if (t42 != 8) {
                                *(unsigned char *)((t5 + 0x0)) = 0x1;
                            } else {
                                *(unsigned char *)((t4 + 0x0)) = 0x0;
                            }
                        } else {
                            *(unsigned char *)((t4 + 0x0)) = 0x0;
                            t42 = t17;
                        }
                    } else {
                        *(unsigned char *)((t4 + 0x0)) = 0x0;
                        t42 = t14;
                    }
                } else {
                    *(unsigned char *)((t4 + 0x0)) = 0x0;
                    t42 = t12;
                }
            } else {
                *(unsigned char *)((t4 + 0x0)) = 0x0;
                t42 = t12;
            }
        } else {
            t31 = *(signed char *)((((t8 * 0x34) + 0xC2738B8) + 0x1));
            if ((int)t31 >= 0) {
                t34 = *(signed char *)((((t8 * 0x34) + 0xC2738B8) + 0x10));
                if (t34 != 7) {
                    t42 = *(signed char *)((((t8 * 0x34) + 0xC2738B8) + 0x10));
                    if (t42 != 8) {
                        *(unsigned char *)((t5 + 0x0)) = 0x1;
                    } else {
                        *(unsigned char *)((t4 + 0x0)) = 0x0;
                    }
                } else {
                    *(unsigned char *)((t4 + 0x0)) = 0x0;
                    t42 = t34;
                }
            } else {
                *(unsigned char *)((t4 + 0x0)) = 0x0;
                t42 = t31;
            }
        }
        t7 = (t7 + 0x1);
        t8 = (t8 + 0x1);
        if ((int)t7 > (int)0x1F) {
            t7 = 0x0;
            t6 = (t6 + 0x4);
        }
        t4 = (t4 + 0x1);
        t5 = (t5 + 0x1);
        if ((int)t8 > (int)0x8F) {
            break;
        }
    }
    return t42;
}

int FUN_0c02d05c(void)
{
    (((struct o0_ushort *)0xC83C6A4)->v) = 0xFFF;
    (((struct o2_uchar *)0xC83C6A4)->v) = 0x0;
    (((struct o3_uchar *)0xC83C6A4)->v) = 0x0;
    (((struct o4_uchar *)0xC83C6A4)->v) = 0x1;
    (((struct o5_uchar *)0xC83C6A4)->v) = 0x3;
    (((struct o6_uchar *)0xC83C6A4)->v) = 0x1;
    (((struct o7_uchar *)0xC83C6A4)->v) = 0x2;
    (((struct o8_uchar *)0xC83C6A4)->v) = 0x1;
    (((struct o9_uchar *)0xC83C6A4)->v) = 0x1;
    (((struct oA_uchar *)0xC83C6A4)->v) = 0x1;
    (((struct oB_uchar *)0xC83C6A4)->v) = 0x0;
    (((struct oC_uint *)0xC83C6A4)->v) = 0x1;
    return 0x0;
}

int FUN_0c02d0b4(void)
{
    return FUN_0c187a88(0xC83C6A4, 0xC30A40C, 0x1C);
}

int FUN_0c02d104(void)
{
    _builtin_set_cr((_builtin_get_cr() & 0xFFFFFFFF) | 0x10000000);
    return ((int (*)(void))(0xAC02D130))();
}

int FUN_0c02d16c(void)
{
    return FUN_0c1779a0();
}

int FUN_0c02d1e8(int a4, int a5)
{
    if (a5 != -23) {
        if (a5 == -33) {
            *(unsigned int *)0xC31F2A8 = 0x1;
        }
    } else {
        *(unsigned int *)0xC31F2A8 = 0x1;
    }
    *(unsigned int *)0xC33A850 = ((*(int *)0xC33A850) + 0x1);
    return a5;
}

int FUN_0c02d208(void)
{
    register int t0;

    t0 = sys_get_video_standard();
    switch (t0) {
    case 1:
        *(unsigned int *)0xC5421D0 = 0x0;
        break;
    case 2:
        *(unsigned int *)0xC5421D0 = 0x13;
        break;
    case 0:
        *(unsigned int *)0xC5421D0 = 0x9;
        break;
    default:
        *(unsigned int *)0xC5421D0 = 0x9;
        break;
    }
    return 0x294;
}

int sys_vsync_handler_install(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = ((int (*)(int, int, int, int))(FUN_0c17da60))(0x1, 0xC02D446, a6, a7);
    return ((int (*)(int, int))(FUN_0c17da60))(0x0, 0xC02D478);
}

int FUN_0c02d294(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = ((int (*)(int, int, int, int))(FUN_0c17da60))(0x1, 0x0, a6, a7);
    return ((int (*)(int, int))(FUN_0c17da60))(0x0, 0x0);
}

int FUN_0c02d446(void)
{
    *(unsigned int *)0xC30EFC4 = ((*(int *)0xC30EFC4) + 0x1);
    *(unsigned int *)0xC31F2A4 = ((*(int *)0xC31F2A4) + 0x1);
    FUN_0c2b49b0();
    if ((*(signed char *)0xC30AF8A) != 0) {
        *(unsigned int *)0xC30AF8C = ((*(int *)0xC30AF8C) + 0x1);
    }
    FUN_0c17db70(0x1);
    return 0x0;
}

int FUN_0c02d478(void)
{
    *(unsigned int *)0xC542438 = 0x1;
    *(unsigned int *)0xC30EFC0 = ((*(int *)0xC30EFC0) + 0x1);
    FUN_0c177350();
    FUN_0c17db70(0x1);
    return 0x0;
}

int FUN_0c02d498(void)
{
    register int t0;

    t0 = 0xC4789F8;
    for (;;) {
        *(float *)((t0 + 0x0)) = 0.0f;
        t0 = (t0 + 0x4);
        if ((unsigned int)t0 >= (unsigned int)0xC478BFC) {
            break;
        }
    }
    thunk_FUN_0c2b5b00(0xC4789F8);
    gfx_set_fog_color(0x101010);
    return gfx_set_fog_density(0xFF09);
}

int FUN_0c02d4c4(void)
{
    FUN_0c177100(0xC4FDCB4, 0x40);
    FUN_0c177380(0x1);
    return FUN_0c1773a0(0x1);
}

int FUN_0c02d4dc(void)
{
    FUN_0c177140();
    FUN_0c177380(0x1);
    return FUN_0c1773a0(0x1);
}

int FUN_0c02d54c(void)
{
    FUN_0c177f20(0xCD00000);
    FUN_0c178350(0x0, 0x30000, 0x60000, 0x30000);
    FUN_0c177f10(0x0);
    FUN_0c176a90(0xC478C34, 0x800, 0x1000);
    FUN_0c17ed10(0xC49EF74, 0x800, 0x1000);
    nlInitMatrix(0xC4B30CC, 0x3F);
    gfx_set_border_color(0x0);
    gfx_set_background_color(0x0, 0x0, 0x0);
    FUN_0c17a020();
    FUN_0c0e0580();
    FUN_0c02d498();
    FUN_0c0dd310();
    nlObjPutInit();
    FUN_0c17e310(0x80);
    FUN_0c178950();
    FUN_0c17e340(0x1);
    FUN_0c17e370(0x1);
    return FUN_0c02d4c4();
}

int sys_shutdown_all(int a4, int a5, int a6, int a7)
{
    FUN_0c02d294(a4, a5, a6, a7);
    FUN_0c2b1424();
    FUN_0c2b407e();
    gdFsFinish();
    syCfgExit();
    syRtcFinish();
    FUN_0c2ae9e4();
    FUN_0c2b1622();
    return FUN_0c1789b0();
}

int FUN_0c02d944(void)
{
    register int t0;

    (((struct o0_uchar *)0xC541F62)->v) = 0x0;
    (((struct o0_uchar *)0xC5429A8)->v) = 0x0;
    (((struct o0_uchar *)0xC541F62)->v) = 0x1;
    (((struct o0_uchar *)0xC5429A8)->v) = 0x1;
    t0 = *(signed char *)0xC541F68;
    (((struct o1_uchar *)0xC5429A8)->v) = t0;
    (((struct o24_uchar *)0xC5429A8)->v) = t0;
    (((struct o3_uchar *)0xC541F62)->v) = 0x1;
    *(unsigned char *)0xC5423BD = 0x0;
    (((struct o7_uchar *)0xC541F62)->v) = 0x0;
    (((struct o8_uchar *)0xC541F62)->v) = 0x0;
    (((struct o4_uchar *)0xC541F62)->v) = 0x1;
    (((struct o2_uchar *)0xC5429A8)->v) = 0x0;
    (((struct o3_uchar *)0xC5429A8)->v) = 0x0;
    (((struct o7_uchar *)0xC5429A8)->v) = 0x0;
    (((struct o5_uchar *)0xC541F62)->v) = 0x1;
    (((struct o4_uchar *)0xC5429A8)->v) = 0x1;
    (((struct oE_uchar *)0xC541F62)->v) = 0x0;
    (((struct o9_uchar *)0xC5429A8)->v) = 0x0;
    (((struct oF_uchar *)0xC541F62)->v) = 0x1;
    (((struct o8_uchar *)0xC5429A8)->v) = 0x1;
    (((struct oB_uchar *)0xC5429A8)->v) = 0x0;
    (((struct o0_uchar *)0xC542B8A)->v) = 0x0;
    (((struct oA_uchar *)0xC5429A8)->v) = 0x0;
    (((struct o1_uchar *)0xC542B8A)->v) = 0x0;
    (((struct o9_uchar *)0xC541F62)->v) = 0x3;
    (((struct o5_uchar *)0xC5429A8)->v) = 0x3;
    (((struct o20_uchar *)0xC5429A8)->v) = 0x3;
    (((struct oA_uchar *)0xC541F62)->v) = 0x2;
    (((struct o6_uchar *)0xC5429A8)->v) = 0x2;
    (((struct o22_uchar *)0xC5429A8)->v) = 0x2;
    (((struct oB_uchar *)0xC541F62)->v) = 0x0;
    (((struct o21_uchar *)0xC5429A8)->v) = 0x0;
    (((struct o23_uchar *)0xC5429A8)->v) = 0x0;
    (((struct o25_uchar *)0xC5429A8)->v) = 0xF;
    (((struct o26_uchar *)0xC5429A8)->v) = 0xF;
    (((struct o0_uchar *)0xC542A08)->v) = 0x0;
    (((struct o1_uchar *)0xC542A08)->v) = 0x2;
    (((struct o2_uchar *)0xC542A08)->v) = 0x0;
    (((struct o3_uchar *)0xC542A08)->v) = 0x2;
    (((struct o4_uchar *)0xC542A08)->v) = 0x1;
    return 0x44;
}

int FUN_0c02d9f2(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t1 = FUN_0c182a58(0x0, 0x0);
    if (t1 == 0) {
        t2 = FUN_0c182b6e(0xC3BABB4);
        *(unsigned int *)0xC3BA8E0 = t2;
        if (t2 != -3) {
            t2 = *(int *)0xC3BABB4;
            t3 = t2;
            t4 = 0xC3BA8E4;
            for (;;) { t0 = *(int *)t3; t3 = (t3 + 4); if ((unsigned int)((t2 + 720)) < (unsigned int)t3) break; *(unsigned int *)t4 = t0; t4 = (t4 + 4); }
            *(unsigned int *)0xC3BABB4 = 0xC3BA8E4;
        }
        return FUN_0c182b04();
    }
    return t1;
}

int FUN_0c02da2e(void)
{
    return ((((*(int *)0xC3BA8E0) == 0)) ? 1 : 0);
}
