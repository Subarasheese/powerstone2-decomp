/* game/unsorted: functions 0C15E078-0C15E960, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_float { char p[0x41C]; float v; };
struct o41C_int { char p[0x41C]; int v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o41C_uint { char p[0x41C]; unsigned int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0582de(int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c187798(void);
int FUN_0c15e078(int a4);
int FUN_0c15e216(int a4, int a5, int a6, int a7);
int FUN_0c15e384(int a4, int a5, int a6, int a7, float f4);
int FUN_0c15e4d2(int a4, int a5);
int FUN_0c15e5d4(int a4, int a5, int a6, int a7);
int FUN_0c15e64a(int a4, int a5, int a6, int a7);
int FUN_0c15e7e4(int a4, int a5, int a6, int a7, float f4, float f5);


int FUN_0c15e216(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)(((a4 + 0x41C) + 0x0));
    (((struct o41C_uchar *)(a4))->v) = (t0 - 1);
    if ((int)(signed char)(t0 - 1) <= 0) {
        (((struct o41C_uchar *)(a4))->v) = a5;
        t0 = *(signed char *)(((a4 + 0x41C) + 0x1));
        *(unsigned char *)(((a4 + 0x41C) + 0x1)) = (t0 + 0x1);
        if ((int)(signed char)(t0 + 0x1) > (int)(signed char)a7) {
            *(unsigned char *)(((a4 + 0x41C) + 0x1)) = a6;
        }
        return 0x1;
    }
    return 0x0;
}

int FUN_0c15e384(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x1E;
        u0 = 0.100000001f;
        u0 = u0 + 0.100000001f * (float)((int)((int)(FUN_0c179ac0()) % (int)0x6));
        (((struct o41C_float *)(a4))->v) = u0;
    }
    t0 = *(signed char *)((a4 + 0x15));
    switch (t0) {
    case 0:
        (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + (((((struct o41C_float *)(a4))->v)) / 8.0f));
        (((struct oBC_float *)(a4))->v) = (((((struct oBC_float *)(a4))->v)) + 0.125f);
        if (!(1.0f > ((((struct oBC_float *)(a4))->v)))) {
            (((struct oBC_float *)(a4))->v) = 1.0f;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            *(unsigned short *)((a4 + 0x1E)) = 0x14;
        }
        break;
    case 1:
        t0 = *(short *)((a4 + 0x1E));
        *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        }
        break;
    case 2:
        (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) - (((((struct o41C_float *)(a4))->v)) / 32.0f));
        (((struct oBC_float *)(a4))->v) = (((((struct oBC_float *)(a4))->v)) - 0.03125f);
        if (!(((((struct oBC_float *)(a4))->v)) > 0.0f)) {
            (((struct oBC_float *)(a4))->v) = 0.0f;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        }
        break;
    }
    u0 = (((struct oBC_float *)(a4))->v);
    (((struct oB8_float *)(a4))->v) = u0;
    (((struct oB4_float *)(a4))->v) = u0;
    u0 = (((struct o48_float *)(a4))->v);
    (((struct o44_float *)(a4))->v) = u0;
    (((struct o40_float *)(a4))->v) = u0;
    *(unsigned int *)((a4 + 0x3C)) = ((*(int *)((a4 + 0x3C))) + 0x38E);
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}

int FUN_0c15e4d2(int a4, int a5)
{
    register int t0;
    register int t22;
    register int t1;
    register int t2;
    register float u17;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t22 = t0;
    if (t0 != 0) {
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x239;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x4)) = 0xC15E384;
        *(unsigned char *)((t0 + 0x2)) = a5;
        t1 = FUN_0c179ac0();
        t2 = ((~(((~t1) + 0x1) & 0x3)) + 0x1);
        if ((int)t1 >= 0) {
            t2 = (t1 & 0x3);
        }
        FUN_0c037498(((((struct oC4_int *)(t0))->v)), t2, 0x55, (*(int *)0xC4B40CC));
        *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0xF;
        *(unsigned int *)((t0 + 0x10)) = a4;
        (((struct o30_float *)(t0))->v) = 0.0f;
        (((struct o28_float *)(t0))->v) = 0.0f;
        if (a5 != 0) {
            u17 = (float)((int)((int)(FUN_0c179ac0()) % (int)0x28));
        } else {
            u17 = ((float)((int)((int)(FUN_0c179ac0()) % (int)0x32)) + 10.0f);
        }
        (((struct o2C_float *)(t0))->v) = u17;
        FUN_0c0582de((t0 + 0x28), ((*(int *)((t0 + 0x10))) + 0x64));
        (((struct o50_float *)(t0))->v) = -1.0f;
        t22 = 0x50;
    }
    return t22;
}

int FUN_0c15e5d4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(int *)((a4 + 0x10));
    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
        if (t1 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
        if ((int)(short)(t1 - 1) <= 0) {
            *(unsigned short *)((a4 + 0x1C)) = 0x14;
            FUN_0c15e4d2(a4, a5);
        }
        t1 = *(signed char *)((t0 + 0x41D));
        t2 = t1;
        if (t1 != 7) {
            t2 = t1;
            if (t1 != 5) {
                (((struct o14_uchar *)(a4))->v) = 0x63;
                t2 = 0x14;
            }
        }
        return t2;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    *(unsigned short *)((a4 + 0x1C)) = 0x14;
    t1 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
    if ((int)(short)(t1 - 1) <= 0) {
        *(unsigned short *)((a4 + 0x1C)) = 0x14;
        FUN_0c15e4d2(a4, a5);
    }
    t1 = *(signed char *)((t0 + 0x41D));
    t0 = t1;
    if (t1 != 7) {
        t2 = t1;
        if (t1 != 5) {
            (((struct o14_uchar *)(a4))->v) = 0x63;
            t2 = 0x14;
        }
        t0 = t2;
    }
    return t0;
}


int FUN_0c15e7e4(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;

    t0 = *(signed char *)((a4 + 0x14));
    t1 = *(int *)((a4 + 0x10));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, t1, a6, a7);
        }
        t0 = *(signed char *)((t1 + 0x41D));
        if ((t0 != 7) && (t0 != 5)) {
            (((struct o14_uchar *)(a4))->v) = 0x63;
        }
        t0 = *(signed char *)((a4 + 0x15));
        if (t0 != 0) {
            t2 = t0;
            if (t0 != 1) {
            } else {
                t0 = *(short *)((a4 + 0x1E));
                *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
                if ((int)(short)(t0 - 1) <= 0) {
                    (((struct o15_uchar *)(a4))->v) = 0x0;
                    t0 = (int)((int)(FUN_0c179ac0()) % (int)0x14);
                    *(unsigned short *)((a4 + 0x1E)) = (t0 + 0xA);
                    t3 = (t0 + 0xA);
                } else {
                    t0 = (((struct o41C_int *)(a4))->v);
                    (((struct o41C_uint *)(a4))->v) = (t0 + 0x38E);
                    u0 = math_sin_angle16((t0 + 0x38E));
                    u1 = u0;
                    if (!(u0 > 0.0f)) {
                        u1 = 0.0f;
                    }
                    u0 = u1;
                    if (!(1.0f > u1)) {
                        u0 = 1.0f;
                    }
                    (((struct oBC_float *)(a4))->v) = u0;
                    (((struct oB8_float *)(a4))->v) = u0;
                    (((struct oB4_float *)(a4))->v) = u0;
                    t3 = 0xB4;
                }
                t2 = t3;
            }
            t0 = t2;
        } else {
            t2 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t2 - 1);
            t3 = (short)(t2 - 1);
            if ((int)(short)(t2 - 1) <= 0) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                *(unsigned short *)((a4 + 0x1E)) = 0x24;
                (((struct o41C_uint *)(a4))->v) = 0x0;
                t3 = 0x24;
            }
            t0 = t3;
        }
        return t0;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x200);
    (((struct oBC_float *)(a4))->v) = 0.0f;
    (((struct oB8_float *)(a4))->v) = 0.0f;
    (((struct oB4_float *)(a4))->v) = 0.0f;
    t0 = *(signed char *)((t1 + 0x41D));
    if ((t0 != 7) && (t0 != 5)) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            t0 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
            if ((int)(short)(t0 - 1) <= 0) {
                (((struct o15_uchar *)(a4))->v) = 0x0;
                t0 = (int)((int)(FUN_0c179ac0()) % (int)0x14);
                *(unsigned short *)((a4 + 0x1E)) = (t0 + 0xA);
                t2 = (t0 + 0xA);
            } else {
                t0 = (((struct o41C_int *)(a4))->v);
                (((struct o41C_uint *)(a4))->v) = (t0 + 0x38E);
                u0 = math_sin_angle16((t0 + 0x38E));
                u1 = u0;
                if (!(u0 > 0.0f)) {
                    u1 = 0.0f;
                }
                u0 = u1;
                if (!(1.0f > u1)) {
                    u0 = 1.0f;
                }
                (((struct oBC_float *)(a4))->v) = u0;
                (((struct oB8_float *)(a4))->v) = u0;
                (((struct oB4_float *)(a4))->v) = u0;
                t2 = 0xB4;
            }
            t1 = t2;
        }
        t0 = t1;
    } else {
        t1 = *(short *)((a4 + 0x1E));
        *(unsigned short *)((a4 + 0x1E)) = (t1 - 1);
        t2 = (short)(t1 - 1);
        if ((int)(short)(t1 - 1) <= 0) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            *(unsigned short *)((a4 + 0x1E)) = 0x24;
            (((struct o41C_uint *)(a4))->v) = 0x0;
            t2 = 0x24;
        }
        t0 = t2;
    }
    return t0;
}
