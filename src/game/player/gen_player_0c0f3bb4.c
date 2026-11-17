/* game/player: functions 0C0F3BB4-0C0F4A7A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o114_int { char p[0x114]; int v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o132_uchar { char p[0x132]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o64_ushort { char p[0x64]; unsigned short v; };
struct o88_float { char p[0x88]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c037ac4(int, int, int, int, int);
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c03f444(int, int, int);
int FUN_0c042fe0(void);
int FUN_0c05879c(int, int, int, float);
extern int FUN_0c059fae();
int FUN_0c0c241a(int);
int pl_no_ground(int);
int FUN_0c0f3f68(int);
int FUN_0c0f4070(int);
int FUN_0c0f41ac(int);
float FUN_0c0e2240(int, int);
int FUN_0c187798(int, int, int);
int FUN_0c0f3bb4(int a4, int a5);
int FUN_0c0f3c7a(int a4, int a5);
int FUN_0c0f3d1c(int a4);
int FUN_0c0f3d88(int a4);
int FUN_0c0f3d96(int a4);
int FUN_0c0f3db8(int a4, int a5, int a6);
int FUN_0c0f3dc8(int a4, int a5, float f4);
int FUN_0c0f3e66(int a4, float f4);
int FUN_0c0f3e9e(int a4);
int FUN_0c0f3ee4(int a4);
int FUN_0c0f425c(int a4);
int FUN_0c0f42cc(int a4);
int FUN_0c0f4320(int a4);
int FUN_0c0f4372(int a4);
int FUN_0c0f4414(int a4);
int FUN_0c0f4448(int a4);
int FUN_0c0f44d6(int a4);
int FUN_0c0f44fc(int a4, int a5);
int FUN_0c0f4590(int a4);
int FUN_0c0f45c6(int a4);
int FUN_0c0f460c(int a4, float f4);
int FUN_0c0f485a(int a4, int a5, int a6);

int FUN_0c0f3bb4(int a4, int a5)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320((a5 - 1), (*(int *)0xC4B40D8));
    t1 = FUN_0c03f444(0x9, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        FUN_0c03733c(t1, (a5 - 1), (*(int *)0xC4B40D8));
        *(unsigned int *)((t1 + 0x4)) = 0xC0F3AEC;
        *(unsigned char *)((t1 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct o41C_uchar *)(t1))->v) = a5;
        (((struct oAC_ushort *)(t1))->v) = 0x1F;
        (((struct oA9_uchar *)(t1))->v) = 0x40;
        (((struct o48_float *)(t1))->v) = 1.0f;
        (((struct o44_float *)(t1))->v) = 1.0f;
        (((struct o40_float *)(t1))->v) = 1.0f;
        (((struct o28_float *)(t1))->v) = ((((struct o1C_float *)(((a5 * 0x34) + 0xC2738B8)))->v));
        (((struct o2C_float *)(t1))->v) = ((((struct o20_float *)(((a5 * 0x34) + 0xC2738B8)))->v));
        (((struct o30_float *)(t1))->v) = ((((struct o24_float *)(((a5 * 0x34) + 0xC2738B8)))->v));
        *(unsigned int *)((t1 + 0x34)) = (*(int *)((((a5 * 0x34) + 0xC2738B8) + 0x28)));
        *(unsigned int *)((t1 + 0x38)) = (*(int *)((((a5 * 0x34) + 0xC2738B8) + 0x2C)));
        *(unsigned int *)((t1 + 0x3C)) = (*(int *)((((a5 * 0x34) + 0xC2738B8) + 0x30)));
        (((struct oA4_uint *)(t1))->v) = ((*(int *)(((((*(signed char *)((((a5 * 0x34) + 0xC2738B8) + 0x18))) << 2) + (0xC4 + a4)) + 0x0))) + 0x28);
        *(unsigned int *)((t1 + 0x10)) = a4;
        FUN_0c0c241a(t1);
        (((struct o12A_ushort *)(t1))->v) = 0x0;
        *(unsigned short *)(((0x12A + t1) + 0x2)) = 0x0;
        *(unsigned short *)(((0x12A + t1) + 0x4)) = 0x0;
        t0 = 0x0;
    }
    return t0;
}

int FUN_0c0f3c7a(int a4, int a5)
{
    register int t3;
    register int t5;
    register int t7;

    t3 = *(int *)((((*(signed char *)((((short)(*(signed char *)((a4 + 0x2))) * (short)0x34) + 0xC2738BD))) << 2) + 0xC277FB0));
    t5 = *(signed char *)(((t3 + (((signed char)a5 << 2) << 1)) + 0x6));
    t7 = *(signed char *)(((t3 + (((signed char)a5 << 2) << 1)) + 0x7));
    FUN_0c037ac4(a4, 0x0, 0xFFFFFFFF, (unsigned char)(*(signed char *)(((t3 + (((signed char)a5 << 2) << 1)) + 0x3))), (unsigned char)(*(signed char *)(((t3 + (((signed char)a5 << 2) << 1)) + 0x4))));
    return (FUN_0c037ac4(a4, 0x1, 0xFFFFFFFF, (unsigned char)t5, (unsigned char)t7));
}

int FUN_0c0f3d1c(int a4)
{
    register int t0;

    if ((*(signed char *)((a4 + 0x132))) != 0) {
        (((struct o132_uchar *)(a4))->v) = 0x0;
        *(unsigned short *)(((0x41C + a4) + 0x8)) = 0x5;
    }
    if ((*(short *)(((0x41C + a4) + 0x8))) != 0) {
        *(unsigned short *)(((0x41C + a4) + 0x8)) = ((*(short *)(((0x41C + a4) + 0x8))) - 1);
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x200);
        (((struct oB4_float *)(a4))->v) = 1.0f;
        (((struct oB8_float *)(a4))->v) = 0.0f;
        (((struct oBC_float *)(a4))->v) = 0.0f;
        t0 = pl_no_ground(a4);
        if (t0 != 0) {
            (((struct o15_uchar *)(a4))->v) = 0x7;
            (((struct o16_uchar *)(a4))->v) = 0x0;
            (((struct o17_uchar *)(a4))->v) = 0x0;
        }
        t0 = 0x1;
    } else {
        (((struct oAC_ushort *)(a4))->v) = 0xF;
        t0 = 0x0;
    }
    return t0;
}

int FUN_0c0f3d88(int a4)
{
    (((struct o15_uchar *)(a4))->v) = 0x2;
    (((struct o16_uchar *)(a4))->v) = 0x0;
    return 0x16;
}

int FUN_0c0f3d96(int a4)
{
    register int t1;

    if ((int)(*(signed char *)0xC54098D) > (int)0x3) {
        (((struct o15_uchar *)(a4))->v) = 0x7;
        (((struct o16_uchar *)(a4))->v) = 0x0;
        (((struct o17_uchar *)(a4))->v) = 0x1;
        t1 = 0x17;
    }
    return t1;
}

int FUN_0c0f3db8(int a4, int a5, int a6)
{
    (((struct o15_uchar *)(a4))->v) = a5;
    (((struct o16_uchar *)(a4))->v) = 0x0;
    (((struct o18_uchar *)(a4))->v) = a6;
    return 0x18;
}

int FUN_0c0f3dc8(int a4, int a5, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t12;
    register float u0;
    register float u1;
    register float u2;

    u0 = 0.0f;
    if (a5 != 0) {
        t1 = 0xC0F3E34;
        u0 = 10000.0f;
    }
    t2 = t1;
    t1 = a5;
    t3 = 0x0;
    u1 = f4;
    u2 = u0;
    for (;;) {
        if ((int)t3 >= (int)0x4) {
            break;
        }
        t1 = 0xC532498;
        t2 = 0x3714;
        t12 = (t3 * 0x3938);
        t12 = (t12 + t1);
        t5 = (*(signed char *)((t12 + t2)));
        t6 = t0;
        t7 = t5;
        t8 = t1;
        if (t5 != 0) {
            t2 = (*(signed char *)((t12 + 0x2)));
            t6 = t0;
            if (t2 != 13) {
                t1 = t12;
                t0 = 0xC17C1A0;
                t1 = (t1 + 0x28);
                u1 = ((FUN_0c0e2240((a4 + 0x28), t1)));
                if (a5 != 0) {
                    if (!(u2 > u1)) {
                    } else {
                        u2 = u1;
                        t2 = t3;
                        *(unsigned char *)(((0x41C + a4) + 0x2)) = t2;
                        t12 = t2;
                    }
                    t7 = t12;
                } else {
                    if (u1 > u2) {
                        u2 = u1;
                        t2 = t3;
                        *(unsigned char *)(((0x41C + a4) + 0x2)) = t2;
                        t12 = t2;
                    }
                    t7 = t12;
                }
                t12 = t7;
                t6 = 0xC17C1A0;
            } else {
                t12 = t2;
                t7 = t5;
                t8 = t1;
            }
        } else {
            t12 = t2;
        }
        t2 = t12;
        t0 = t6;
        t3 = (t3 + 0x1);
        t5 = t7;
        t1 = t8;
    }
    return t2;
}

int FUN_0c0f3e66(int a4, float f4)
{
    register float t1;

    t1 = FUN_0c0e2240((a4 + 0x28), (((short)(*(signed char *)(((0x41C + a4) + 0x2))) * (short)0x3938) + 0xC5324C0));
    return (((f4 > t1)) ? 1 : 0);
}

int FUN_0c0f3e9e(int a4)
{
    int stk[3];
    register int t3;
    register int t10;
    register int t14;

    if ((*(signed char *)(((0x41C + a4) + 0xB))) == 0) {
        t3 = ((int (*)(int, int, int))(FUN_0c059fae))((*(signed char *)((a4 + 0x1))), (*(signed char *)((a4 + 0x135))), 0x0);
        *(unsigned char *)(((0x41C + a4) + 0xB)) = 0x24;
    }
    if ((*(signed char *)(((0x41C + a4) + 0xB))) == 18) {
        t10 = ((int (*)(int, int, int, int, int, int, int))(FUN_0c059fae))((*(signed char *)((a4 + 0x1))), (*(signed char *)((a4 + 0x135))), 0x1, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8));
    }
    t14 = *(signed char *)(((0x41C + a4) + 0xB));
    *(unsigned char *)(((0x41C + a4) + 0xB)) = (t14 - 1);
    return (t14 - 1);
}

int FUN_0c0f3ee4(int a4)
{
    register int t0;

    if ((*(signed char *)((a4 + 0x16))) == 0) {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        (((struct o20_ushort *)(a4))->v) = 0xB4;
        FUN_0c0f3c7a(a4, 0x0);
    }
    t0 = FUN_0c042fe0();
    if (t0 != 0) {
        t0 = (((struct o20_short *)(a4))->v);
        (((struct o20_ushort *)(a4))->v) = (t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            (((struct o15_uchar *)(a4))->v) = 0x3;
            (((struct o16_uchar *)(a4))->v) = 0x0;
        }
    }
    t0 = FUN_0c0f3d1c(a4);
    if (t0 == 0) {
        FUN_0c037bf6(a4);
        FUN_0c038362(a4);
    }
    return FUN_0c0f3d96(a4);
}

int FUN_0c0f425c(int a4)
{
    register int t7;

    if ((*(signed char *)((a4 + 0x16))) == 0) {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        (((struct o17_uchar *)(a4))->v) = 0x0;
        FUN_0c0f3c7a(a4, 0x4);
    }
    t7 = *(signed char *)(((0x41C + a4) + 0x3));
    if (t7 != 0) {
        if (t7 != 1) {
            
            return FUN_0c0f41ac(a4);
        }
        return FUN_0c0f4070(a4);
    }
    return FUN_0c0f3f68(a4);
}

int FUN_0c0f42cc(int a4)
{
    register int t1;
    register int t4;
    register int t6;

    t1 = *(signed char *)((((short)(*(signed char *)((a4 + 0x2))) * (short)0x34) + 0xC2738BD));
    t4 = *(signed char *)(((((t1 << 2) << 1) + 0xC1CE270) + 0x6));
    t6 = *(signed char *)(((((t1 << 2) << 1) + 0xC1CE270) + 0x7));
    FUN_0c037ac4(a4, 0x0, 0xFFFFFFFF, (unsigned char)(*(signed char *)(((((t1 << 2) << 1) + 0xC1CE270) + 0x3))), (unsigned char)(*(signed char *)(((((t1 << 2) << 1) + 0xC1CE270) + 0x4))));
    return (FUN_0c037ac4(a4, 0x1, 0xFFFFFFFF, (unsigned char)t4, (unsigned char)t6));
}

int FUN_0c0f4320(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x17));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        FUN_0c0f42cc(a4);
    }
    t0 = FUN_0c0f3d1c(a4);
    if (t0 == 0) {
        t1 = FUN_0c037bf6(a4);
        if ((unsigned char)t1 != 0) {
            (((struct o15_uchar *)(a4))->v) = 0x2;
            (((struct o16_uchar *)(a4))->v) = 0x0;
        }
        return FUN_0c038362(a4);
    }
    return t0;
}

int FUN_0c0f4372(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x17));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        (((struct o20_ushort *)(a4))->v) = 0x8;
        FUN_0c0f42cc(a4);
    }
    if (((((struct o20_short *)(a4))->v)) != 0) {
        (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) - 1);
        FUN_0c05879c(a4, (((short)(*(signed char *)(((0x41C + a4) + 0x2))) * (short)0x3938) + 0xC5324C0), 0x16C, 0.0f);
    }
    t0 = FUN_0c0f3d1c(a4);
    if (t0 == 0) {
        t1 = FUN_0c037bf6(a4);
        if ((unsigned char)t1 != 0) {
            (((struct o15_uchar *)(a4))->v) = 0x2;
            (((struct o16_uchar *)(a4))->v) = 0x0;
        }
        return FUN_0c038362(a4);
    }
    return t0;
}

int FUN_0c0f4414(int a4)
{
    int t6;

    if ((*(signed char *)((a4 + 0x16))) == 0) {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        (((struct o17_uchar *)(a4))->v) = 0x0;
    }
    t6 = *(signed char *)(((0x41C + a4) + 0x3));
    if ((t6 != 0) && (t6 != 1)) {
        
        return FUN_0c0f4372(a4);
    }
    return FUN_0c0f4320(a4);
}

int FUN_0c0f4448(int a4)
{
    register int t0;

    if ((*(signed char *)((a4 + 0x16))) == 0) {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        FUN_0c037ac4(a4, 0x0, 0xFFFFFFFF, 0x3, 0x48);
        FUN_0c037ac4(a4, 0x1, 0xFFFFFFFF, 0x3, 0x48);
    }
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        t0 = pl_no_ground(a4);
        if (t0 != 0) {
            (((struct o15_uchar *)(a4))->v) = 0x7;
            (((struct o16_uchar *)(a4))->v) = 0x0;
            t0 = 0x17;
        } else {
            (((struct o15_uchar *)(a4))->v) = 0x2;
            t0 = 0x16;
        }
        *(unsigned char *)((a4 + t0)) = 0x0;
    }
    return FUN_0c038362(a4);
}

int FUN_0c0f44d6(int a4)
{
    register int t7;
    register int t2;

    t7 = 0x14;
    if ((int)(*(signed char *)((a4 + 0x14))) <= (int)0x1) {
        t2 = *(signed char *)((a4 + 0x15));
        t7 = t2;
        if (t2 != 7) {
            (((struct o15_uchar *)(a4))->v) = 0x7;
            (((struct o16_uchar *)(a4))->v) = 0x0;
            (((struct o17_uchar *)(a4))->v) = 0x1;
            t7 = 0x17;
        }
    }
    return t7;
}

int FUN_0c0f44fc(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) - 0.0500000007f);
            if (!(((((struct o48_float *)(a4))->v)) > 0.0f)) {
                (((struct o48_float *)(a4))->v) = 0.0f;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                (((struct o16_uchar *)(a4))->v) = 0x2;
                (((struct o15_uchar *)(a4))->v) = 0x2;
            }
            (((struct o40_float *)(a4))->v) = ((((struct o48_float *)(a4))->v));
            t0 = 0x40;
        } else {
            (((struct oA8_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0xA8))) ^ 0x1);
            t1 = (((struct o20_short *)(a4))->v);
            (((struct o20_ushort *)(a4))->v) = (t1 - 1);
            t2 = 0x20;
            if ((int)(short)(t1 - 1) <= 0) {
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                t2 = 0x16;
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        (((struct o12A_ushort *)(a4))->v) = 0x0;
        (((struct o12C_ushort *)(a4))->v) = 0x0;
        (((struct o12E_ushort *)(a4))->v) = 0xF0;
        (((struct o20_ushort *)(a4))->v) = 0x1E;
        *(unsigned int *)(((0xC540D94 + ((*(signed char *)(((0x41C + a4) + 0x1))) << 2)) + 0x0)) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0xA8))) ^ 0x1);
        t0 = (((struct o20_short *)(a4))->v);
        (((struct o20_ushort *)(a4))->v) = (t0 - 1);
        t2 = 0x20;
        if ((int)(short)(t0 - 1) <= 0) {
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            t2 = 0x16;
        }
        t1 = t2;
    }
    return t1;
}

int FUN_0c0f4590(int a4)
{
    register int t6;
    register int t7;

    if ((*(signed char *)((a4 + 0x16))) == 0) {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        FUN_0c0f3c7a(a4, 0x0);
    }
    t6 = FUN_0c0f3d1c(a4);
    t7 = t6;
    if (t6 != 0) {
        (((struct o15_uchar *)(a4))->v) = 0x2;
        (((struct o16_uchar *)(a4))->v) = 0x0;
        t7 = 0x16;
    }
    return t7;
}

int FUN_0c0f45c6(int a4)
{
    if ((*(signed char *)((a4 + 0x16))) == 0) {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        FUN_0c0f3c7a(a4, 0x0);
    }
    FUN_0c037bf6(a4);
    return FUN_0c038362(a4);
}

int FUN_0c0f460c(int a4, float f4)
{
    register float u7;

    if ((*(signed char *)((a4 + 0x16))) == 0) {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        FUN_0c0f3c7a(a4, 0x0);
        (((struct o40_float *)(a4))->v) = 0.0f;
        (((struct o48_float *)(a4))->v) = 0.0f;
    }
    u7 = (((struct o48_float *)(a4))->v);
    (((struct o48_float *)(a4))->v) = (u7 + 0.0500000007f);
    if (!(1.0f > (u7 + 0.0500000007f))) {
        (((struct o48_float *)(a4))->v) = 1.0f;
        (((struct o15_uchar *)(a4))->v) = 0x2;
        (((struct o16_uchar *)(a4))->v) = 0x0;
    }
    (((struct o40_float *)(a4))->v) = ((((struct o48_float *)(a4))->v));
    return 0x40;
}

int FUN_0c0f485a(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register float u0;
    register float u1;

    t3 = 0x0;
    t4 = a6;
    for (;;) {
        if ((int)t3 >= (int)((((struct oC0_int *)(a4))->v))) {
            break;
        }
        t4 = t3;
        t4 = (t4 << 2);
        t4 = (t4 + (0xC4 + a4));
        t4 = (*(int *)((t4 + 0x0)));
        *(unsigned char *)((t4 + 0x0)) = 0x1;
        *(unsigned short *)((t4 + 0x6)) = 0xF;
        t5 = 0x2;
        t6 = *(signed char *)((0xC2885B4 + t3));
        t5 = (t5 + t4);
        t3 = (t3 + 0x1);
        *(unsigned char *)((t5 + 0x0)) = t6;
    }
    *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x1F;
    *(volatile int *)((a4 + 0xC4));
    FUN_0c187798(a4, t3, t4);
    t3 = t0;
    t0 = 0x0;
    t4 = t1;
    t1 = t2;
    for (;;) {
        if ((int)t0 >= (int)((((struct o114_int *)(t3))->v))) {
            break;
        }
        t2 = 0x118;
        t4 = t0;
        t4 = (t4 << 2);
        t2 = (t2 + t3);
        u0 = 1.0f;
        t2 = (t2 + t4);
        t0 = (t0 + 0x1);
        (((struct o64_ushort *)((*(int *)((t2 + 0x0)))))->v) = t1;
        u1 = u0;
        u1 = u1 + (0.125f) * (((((struct o44_float *)(t3))->v)));
        u0 = u1;
        t4 = (t4 + (0x118 + t3));
        t2 = (*(int *)((t4 + 0x0)));
        (((struct o88_float *)(t2))->v) = u0;
    }
    return 0x114;
}
