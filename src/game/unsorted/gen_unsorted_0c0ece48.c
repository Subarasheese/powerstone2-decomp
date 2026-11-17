/* game/unsorted: functions 0C0ECE48-0C0ED5B4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o131_uchar { char p[0x131]; unsigned char v; };
struct o132_uchar { char p[0x132]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC_float { char p[0xC]; float v; };
float math_cos_angle16(int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
int FUN_0c0ece48(int a4);
int FUN_0c0ece6e(int a4);
int FUN_0c0ece8e(int a4, float f4);
int FUN_0c0ecec4(int a4);
float FUN_0c0ecf3c(int a4, float f4);
float FUN_0c0ed05c(int a4);
int FUN_0c0ed126(int a4);
int FUN_0c0ed16c(int a4);
int FUN_0c0ed1d2(int a4, int a5);
int FUN_0c0ed222(int a4);
int FUN_0c0ed268(int a4);
float FUN_0c0ed2b8(int a4);

int FUN_0c0ece48(int a4)
{
    if ((*(signed char *)((a4 + 0x132))) != 0) {
        (((struct o15_uchar *)(a4))->v) = 0x63;
        (((struct o131_uchar *)(a4))->v) = 0x0;
        (((struct o132_uchar *)(a4))->v) = 0x0;
        (((struct o16_uchar *)(a4))->v) = 0x0;
        return 0x1;
    }
    return 0x0;
}

int FUN_0c0ece6e(int a4)
{
    if ((*(signed char *)((a4 + 0x132))) != 0) {
        *(unsigned char *)(((0x41C + a4) + 0xC)) = 0x5;
        (((struct o132_uchar *)(a4))->v) = 0x0;
        return 0x1;
    }
    return 0x0;
}

int FUN_0c0ece8e(int a4, float f4)
{
    register int t3;

    if ((*(signed char *)(((0x41C + a4) + 0xC))) != 0) {
        *(unsigned char *)(((0x41C + a4) + 0xC)) = ((*(signed char *)(((0x41C + a4) + 0xC))) - 1);
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x200);
        (((struct oB4_float *)(a4))->v) = 1.0f;
        (((struct oB8_float *)(a4))->v) = 0.0f;
        (((struct oBC_float *)(a4))->v) = 0.0f;
        t3 = 0xBC;
    } else {
        (((struct oAC_ushort *)(a4))->v) = 0xF;
        t3 = 0xAC;
    }
    return t3;
}

int FUN_0c0ecec4(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            t0 = FUN_0c179ac0();
            t1 = ((~(((~t0) + 0x1) & 0x7)) + 0x1);
            if ((int)t0 >= 0) {
                t1 = (t0 & 0x7);
            }
            (((struct o15_uchar *)(a4))->v) = (*(int *)((0xC1CCFA8 + (t1 << 2))));
            (((struct o16_uchar *)(a4))->v) = 0x0;
            t0 = 0x16;
        } else {
            t1 = (((struct o22_short *)(a4))->v);
            (((struct o22_ushort *)(a4))->v) = (t1 - 1);
            t2 = 0x22;
            if ((int)(short)(t1 - 1) <= 0) {
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                t2 = 0x16;
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        (((struct o22_ushort *)(a4))->v) = 0x78;
        (((struct o12A_ushort *)(a4))->v) = 0x0;
        t0 = (((struct o22_short *)(a4))->v);
        (((struct o22_ushort *)(a4))->v) = (t0 - 1);
        t2 = 0x22;
        if ((int)(short)(t0 - 1) <= 0) {
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            t2 = 0x16;
        }
        t1 = t2;
    }
    return t1;
}

float FUN_0c0ecf3c(int a4, float f4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;

    if ((*(signed char *)((a4 + 0x16))) == 0) {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        (((struct o17_uchar *)(a4))->v) = 0x0;
        (((struct o12C_ushort *)(a4))->v) = 0xFFFFFFFF;
    } else {
        if ((*(signed char *)((a4 + 0x17))) == 0) {
            t0 = *(short *)(((0x41C + a4) + 0x6));
            *(unsigned short *)(((0x41C + a4) + 0x6)) = (t0 - 1);
            if ((int)(short)(t0 - 1) <= 0) {
                (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            }
        } else {
            t0 = *(short *)(((0x41C + a4) + 0xA));
            *(unsigned short *)(((0x41C + a4) + 0xA)) = (t0 - 1);
            if ((int)(short)(t0 - 1) <= 0) {
                *(unsigned short *)(((0x41C + a4) + 0xA)) = 0x2;
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
            }
            if ((int)(*(short *)((a4 + 0x1E))) > (int)0x168) {
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                (((struct o17_uchar *)(a4))->v) = 0x0;
                *(unsigned short *)(((0x41C + a4) + 0x6)) = 0xA;
                t0 = FUN_0c179ac0();
                t1 = ((~(((~t0) + 0x1) & 0x7)) + 0x1);
                if ((int)t0 >= 0) {
                    t1 = (t0 & 0x7);
                }
                (((struct o15_uchar *)(a4))->v) = (*(int *)((0xC1CCF88 + (t1 << 2))));
                (((struct o16_uchar *)(a4))->v) = 0x0;
            }
            u0 = math_cos_angle16((int)(((float)(*(short *)((a4 + 0x1E))) * 65536.0f) / 360.0f));
            u1 = (((-u0) + 1.0f) / (1.0f + 1.0f));
            if (0.0f > (((-u0) + 1.0f) / (1.0f + 1.0f))) {
                u1 = 0.0f;
            }
            u2 = u1;
            if (u1 > 1.0f) {
                u2 = 1.0f;
            }
            (((struct o2C_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - ((u2 * 50.0f)));
            u1 = ((-u0) + 1.0f);
        }
        u0 = u1;
    }
    return u0;
}

float FUN_0c0ed05c(int a4)
{
    register int t0;
    register float u0;
    register float u1;
    register float u2;

    if ((*(signed char *)((a4 + 0x16))) == 0) {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        (((struct o17_uchar *)(a4))->v) = 0x0;
        (((struct o12C_ushort *)(a4))->v) = 0xFFFFFFFF;
        *(unsigned short *)(((0x41C + a4) + 0x8)) = 0x0;
    }
    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0xA);
    if ((int)(*(short *)((a4 + 0x1E))) > (int)0x168) {
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        (((struct o17_uchar *)(a4))->v) = 0x0;
        t0 = (int)((int)(FUN_0c179ac0()) % (int)0x3C);
        *(unsigned short *)(((0x41C + a4) + 0x6)) = ((t0 << 1) + t0);
        t0 = *(short *)(((0x41C + a4) + 0x8));
        *(unsigned short *)(((0x41C + a4) + 0x8)) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) >= (int)0x8) {
            (((struct o15_uchar *)(a4))->v) = 0x4;
            (((struct o16_uchar *)(a4))->v) = 0x0;
        }
    }
    u0 = math_cos_angle16((int)(((float)(*(short *)((a4 + 0x1E))) * ((((struct o0_float *)0xC0ED18C)->v))) / ((((struct o4_float *)0xC0ED18C)->v))));
    u1 = (((-u0) + 1.0f) / (1.0f + 1.0f));
    if (0.0f > (((-u0) + 1.0f) / (1.0f + 1.0f))) {
        u1 = 0.0f;
    }
    u2 = u1;
    if (u1 > 1.0f) {
        u2 = 1.0f;
    }
    (((struct o2C_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - ((u2 * ((((struct oC_float *)0xC0ED18C)->v)))));
    return ((-u0) + 1.0f);
}

int FUN_0c0ed126(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            (((struct o15_uchar *)(a4))->v) = 0x4;
            (((struct o16_uchar *)(a4))->v) = 0x0;
            t0 = 0x16;
        } else {
            t1 = (((struct o22_short *)(a4))->v);
            (((struct o22_ushort *)(a4))->v) = (t1 - 1);
            t2 = 0x22;
            if ((int)(short)(t1 - 1) <= 0) {
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                t2 = 0x16;
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        (((struct o22_ushort *)(a4))->v) = 0xB4;
        t0 = (((struct o22_short *)(a4))->v);
        (((struct o22_ushort *)(a4))->v) = (t0 - 1);
        t2 = 0x22;
        if ((int)(short)(t0 - 1) <= 0) {
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            t2 = 0x16;
        }
        t1 = t2;
    }
    return t1;
}

int FUN_0c0ed16c(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            (((struct o15_uchar *)(a4))->v) = 0x4;
            (((struct o16_uchar *)(a4))->v) = 0x0;
            t0 = 0x16;
        } else {
            t1 = (((struct o22_short *)(a4))->v);
            (((struct o22_ushort *)(a4))->v) = (t1 - 1);
            t2 = 0x22;
            if ((int)(short)(t1 - 1) <= 0) {
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                t2 = 0x16;
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        (((struct o22_ushort *)(a4))->v) = 0x258;
        t0 = (((struct o22_short *)(a4))->v);
        (((struct o22_ushort *)(a4))->v) = (t0 - 1);
        t2 = 0x22;
        if ((int)(short)(t0 - 1) <= 0) {
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            t2 = 0x16;
        }
        t1 = t2;
    }
    return t1;
}

int FUN_0c0ed1d2(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            (((struct o15_uchar *)(a4))->v) = 0x4;
            (((struct o16_uchar *)(a4))->v) = 0x0;
            (((struct o12A_ushort *)(a4))->v) = 0x0;
            t0 = 0x12A;
        } else {
            t1 = (((struct o22_short *)(a4))->v);
            (((struct o22_ushort *)(a4))->v) = (t1 - 1);
            t2 = 0x22;
            if ((int)(short)(t1 - 1) <= 0) {
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                t2 = 0x16;
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        (((struct o22_ushort *)(a4))->v) = 0xB4;
        (((struct o12A_ushort *)(a4))->v) = 0xF;
        t0 = (((struct o22_short *)(a4))->v);
        (((struct o22_ushort *)(a4))->v) = (t0 - 1);
        t2 = 0x22;
        if ((int)(short)(t0 - 1) <= 0) {
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            t2 = 0x16;
        }
        t1 = t2;
    }
    return t1;
}

int FUN_0c0ed222(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            (((struct o15_uchar *)(a4))->v) = 0x4;
            (((struct o16_uchar *)(a4))->v) = 0x0;
            t0 = 0x16;
        } else {
            t1 = (((struct o22_short *)(a4))->v);
            (((struct o22_ushort *)(a4))->v) = (t1 - 1);
            t2 = 0x22;
            if ((int)(short)(t1 - 1) <= 0) {
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                t2 = 0x16;
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        (((struct o22_ushort *)(a4))->v) = 0x159;
        t0 = (((struct o22_short *)(a4))->v);
        (((struct o22_ushort *)(a4))->v) = (t0 - 1);
        t2 = 0x22;
        if ((int)(short)(t0 - 1) <= 0) {
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            t2 = 0x16;
        }
        t1 = t2;
    }
    return t1;
}

int FUN_0c0ed268(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            (((struct o15_uchar *)(a4))->v) = 0x4;
            (((struct o16_uchar *)(a4))->v) = 0x0;
            t0 = 0x16;
        } else {
            t1 = (((struct o22_short *)(a4))->v);
            (((struct o22_ushort *)(a4))->v) = (t1 - 1);
            t2 = 0x22;
            if ((int)(short)(t1 - 1) <= 0) {
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                t2 = 0x16;
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        (((struct o22_ushort *)(a4))->v) = 0x12C;
        t0 = (((struct o22_short *)(a4))->v);
        (((struct o22_ushort *)(a4))->v) = (t0 - 1);
        t2 = 0x22;
        if ((int)(short)(t0 - 1) <= 0) {
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            t2 = 0x16;
        }
        t1 = t2;
    }
    return t1;
}

float FUN_0c0ed2b8(int a4)
{
    register int t14;
    register float t18;
    register float u19;
    register float u20;

    if ((*(short *)(((a4 + 0x41C) + 0x4))) != 0) {
        *(unsigned short *)(((a4 + 0x41C) + 0x4)) = ((*(short *)(((a4 + 0x41C) + 0x4))) - 1);
    } else {
        *(unsigned short *)(((a4 + 0x41C) + 0x2)) = ((*(short *)(((a4 + 0x41C) + 0x2))) + 0x1);
        if ((*(short *)(((a4 + 0x41C) + 0x2))) != 90) {
            if ((*(short *)(((a4 + 0x41C) + 0x2))) == 0xB4) {
                *(unsigned short *)(((a4 + 0x41C) + 0x2)) = 0x0;
                *(unsigned short *)(((a4 + 0x41C) + 0x4)) = 0x3C;
            }
        } else {
            *(unsigned short *)(((a4 + 0x41C) + 0x4)) = 0x3C;
        }
    }
    t14 = (((struct oC4_int *)(a4))->v);
    t18 = math_sin_angle16((int)(((float)(*(short *)(((a4 + 0x41C) + 0x2))) * ((((struct o0_float *)0xC0ED380)->v))) / ((((struct o4_float *)0xC0ED380)->v))));
    u19 = (((struct oC_float *)0xC0ED380)->v);
    u20 = 1.0f;
    u20 = u20 + u19 * t18;
    (((struct o88_float *)(t14))->v) = u20;
    (((struct o84_float *)(t14))->v) = u20;
    return u19;
}
