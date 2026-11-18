/* game/effect: functions 0C14F6A0-0C151288, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o420_float { char p[0x420]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c1502e8(int, int, int, int, int, int);
int FUN_0c150d1e(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c17c130(int, int, int);
int FUN_0c18778c(int, float);
int FUN_0c187798(int, int, int);
int FUN_0c14f6a0(int a4, int a5, int a6, float f4);
int FUN_0c14f734(int a4, int a5, int a6, int a7);
int FUN_0c14f9d6(int a4, int a5, int a6);
int FUN_0c14fc70(int a4, int a5, int a6);
int FUN_0c14fed8(int a4, int a5, int a6, float f4, float f5);
int FUN_0c150010(int a4, int a5, int a6, float f4, float f5, float f6, float f7);
int FUN_0c150160(int a4, int a5, int a6, float f4, float f5, float f6, float f7);
int FUN_0c1501f2(int a4, int a5, int a6, float f4, float f5, float f6, float f7);
int FUN_0c150684(int a4, int a5, int a6, int a7);
int FUN_0c1507f4(int a4, int a5, int a6, int a7);
int FUN_0c150a2c(int a4, int a5, int a6, int a7);
int obj_step_pos_vel_acc(int a4);
int FUN_0c150aae(int a4, int a5, int a6, int a7);
int FUN_0c150c68(int a4, int a5, int a6, int a7);
int FUN_0c150d74(int a4, int a5, int a6, int a7);
int FUN_0c150ed4(int a4);
int FUN_0c150f3c(int a4);
int FUN_0c150faa(int a4);









int FUN_0c150684(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            if (t0 == 3) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            return t0;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
        (((struct o41C_uchar *)(a4))->v) = 0x1;
        *(unsigned char *)(((0x41C + a4) + 0x1)) = 0x1;
    }
    t0 = (((struct oC4_int *)(a4))->v);
    FUN_0c17c130((0x90 + t0), (0x90 + t0), (0x9C + t0));
    FUN_0c17c130((t0 + 0x6C), (t0 + 0x6C), (0x90 + t0));
    t1 = *(signed char *)(((0x41C + a4) + 0x1));
    *(unsigned char *)(((0x41C + a4) + 0x1)) = (t1 - 1);
    if ((signed char)(t1 - 1) == 0) {
        *(unsigned char *)(((0x41C + a4) + 0x1)) = 0x4;
        FUN_0c037498(t0, (*(signed char *)(((0x41C + a4) + 0x0))), 0x7, (*(int *)0xC4B40CC));
        t1 = *(signed char *)(((0x41C + a4) + 0x0));
        (((struct o41C_uchar *)(a4))->v) = (t1 + 0x1);
        if ((int)(signed char)(t1 + 0x1) >= (int)0xA) {
            *(unsigned char *)((t0 + 0x0)) = 0x0;
        }
    }
    if ((int)(*(signed char *)(((0x41C + a4) + 0x0))) >= (int)0x5) {
        u0 = (float)(*(signed char *)(((0x41C + a4) + 0x1)));
        u0 = u0 + 4.0f * (((-(float)(*(signed char *)(((0x41C + a4) + 0x0)))) + 15.0f));
        (((struct o14_float *)(t0))->v) = (u0 / 32.0f);
    }
    t1 = *(signed char *)(((0x41C + a4) + 0x1));
    u0 = ((float)(*(signed char *)(((0x41C + a4) + 0x0))) * 4.0f);
    u1 = (((struct o4_float *)((0x41C + a4)))->v);
    (((struct o8C_float *)(t0))->v) = ((u1 + (((u0 - (float)t1) + 4.0f) / 64.0f)) * 0.800000012f);
    (((struct o88_float *)(t0))->v) = ((u1 + (((u0 - (float)t1) + 4.0f) / 64.0f)) * 0.800000012f);
    (((struct o84_float *)(t0))->v) = ((u1 + (((u0 - (float)t1) + 4.0f) / 64.0f)) * 0.800000012f);
    if ((*(signed char *)((t0 + 0x0))) != 0) {
        t0 = *(short *)((a4 + 0x1E));
        t1 = t0;
        if (t0 != 0) {
            t0 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
            t1 = (short)(t0 - 1);
            if ((int)(short)(t0 - 1) <= 0) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t1 = 0x14;
            }
        }
        t0 = t1;
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t0 = 0x14;
    }
    return t0;
}


int FUN_0c150a2c(int a4, int a5, int a6, int a7)
{
    register int t1;

    t1 = *(int *)((0xC2A2784 + ((*(signed char *)((a4 + 0x2))) << 2)));
    return ((int (*)(int, int, int, int))(t1))(a4, a5, a6, a7);
}

int obj_step_pos_vel_acc(int a4)
{
    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
    (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
    (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
    (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) + ((((struct o58_float *)(a4))->v)));
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
    (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + ((((struct o60_float *)(a4))->v)));
    return 0x54;
}

int FUN_0c150aae(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            obj_step_pos_vel_acc(a4);
            if (!(((((struct o4C_float *)(a4))->v)) > 0.0f)) {
                (((struct o4C_float *)(a4))->v) = 0.0f;
                (((struct o58_float *)(a4))->v) = 0.0f;
            }
            if (!(((((struct o54_float *)(a4))->v)) > 0.0f)) {
                (((struct o54_float *)(a4))->v) = 0.0f;
                (((struct o60_float *)(a4))->v) = 0.0f;
            }
            if (!(((((struct o44_float *)(a4))->v)) > 0.0f)) {
                (((struct o44_float *)(a4))->v) = 0.0f;
                (((struct o50_float *)(a4))->v) = 0.0f;
                (((struct o5C_float *)(a4))->v) = 0.0f;
            }
            (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) + -0.0357142873f);
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            t1 = (short)(t0 - 1);
            if ((short)(t0 - 1) == 0) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                (((struct oB0_float *)(a4))->v) = 0.0f;
                t1 = 0xB0;
            }
            return t1;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((a4 + 0x1C)) = 0x1E;
        (((struct o48_float *)(a4))->v) = 1.0f;
        (((struct o44_float *)(a4))->v) = 1.0f;
        (((struct o40_float *)(a4))->v) = 1.0f;
        (((struct o54_float *)(a4))->v) = 0.5f;
        (((struct o50_float *)(a4))->v) = 0.5f;
        (((struct o4C_float *)(a4))->v) = 0.5f;
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o5C_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.0f;
    }
    obj_step_pos_vel_acc(a4);
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) == 28) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o4C_float *)(a4))->v) = 0.150000006f;
        (((struct o50_float *)(a4))->v) = 0.0f;
        (((struct o54_float *)(a4))->v) = 0.150000006f;
        (((struct o58_float *)(a4))->v) = -0.0199999996f;
        (((struct o5C_float *)(a4))->v) = -0.00400000019f;
        (((struct o60_float *)(a4))->v) = -0.0199999996f;
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x400);
        (((struct oB0_float *)(a4))->v) = 1.0f;
        t1 = 0xB0;
    }
    return t1;
}

int FUN_0c150c68(int a4, int a5, int a6, int a7)
{
    register int t0;
    register float u0;
    register float u1;

    u0 = (((struct o0_float *)0xC150D94)->v);
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + u0);
        (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + u0);
        (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + u0);
        u1 = (((struct o4_float *)0xC150D94)->v);
        (((struct oB4_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) - u1);
        (((struct oB8_float *)(a4))->v) = (((((struct oB8_float *)(a4))->v)) - u1);
        (((struct oBC_float *)(a4))->v) = (((((struct oBC_float *)(a4))->v)) - u1);
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
        t0 = *(signed char *)((a4 + 0x2));
        (((struct o48_float *)(a4))->v) = ((float)(t0 + 0x1) * u0);
        (((struct o44_float *)(a4))->v) = ((float)(t0 + 0x1) * u0);
        (((struct o40_float *)(a4))->v) = ((float)(t0 + 0x1) * u0);
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x200);
        (((struct oB4_float *)(a4))->v) = 1.0f;
        (((struct oB8_float *)(a4))->v) = 1.0f;
        (((struct oBC_float *)(a4))->v) = 1.0f;
        (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + u0);
        (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + u0);
        (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + u0);
        u0 = (((struct o4_float *)0xC150D94)->v);
        (((struct oB4_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) - u0);
        (((struct oB8_float *)(a4))->v) = (((((struct oB8_float *)(a4))->v)) - u0);
        (((struct oBC_float *)(a4))->v) = (((((struct oBC_float *)(a4))->v)) - u0);
    }
    t0 = 0xB4;
    if (!(((((struct oB4_float *)(a4))->v)) > 0.0f)) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oB4_float *)(a4))->v) = 0.0f;
        (((struct oB8_float *)(a4))->v) = 0.0f;
        (((struct oBC_float *)(a4))->v) = 0.0f;
        t0 = 0xBC;
    }
    return t0;
}

int FUN_0c150d74(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((a4 + 0x1C)) = 0x78;
        (((struct o5C_float *)(a4))->v) = ((((struct o2C_float *)(a4))->v));
    }
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - (1.0f + 1.0f));
    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
    if (!(((((struct o2C_float *)(a4))->v)) > ((((struct o5C_float *)(a4))->v)))) {
        (((struct o2C_float *)(a4))->v) = ((((struct o5C_float *)(a4))->v));
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        FUN_0c150d1e(0x0, (a4 + 0x28));
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) == 0) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c150ed4(int a4)
{
    register int t0;

    (((struct o20_ushort *)(a4))->v) = 0x0;
    t0 = (((struct o20_short *)(a4))->v);
    (((struct o22_ushort *)(a4))->v) = (*(signed char *)((((t0 << 1) + t0) + 0xC2A2790)));
    t0 = (((struct o20_short *)(a4))->v);
    return FUN_0c037498(((((struct oC4_int *)(a4))->v)), (*(signed char *)((((t0 << 1) + t0) + 0xC2A2791))), 0x1A, (*(int *)0xC4B40CC));
}

int FUN_0c150f3c(int a4)
{
    register int t0;

    t0 = (((struct o22_short *)(a4))->v);
    (((struct o22_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        t0 = (((struct o20_short *)(a4))->v);
        if ((unsigned char)(*(signed char *)(((((t0 << 1) + t0) + 0xC2A2790) + 0x2))) != 0xFF) {
            (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
        }
        t0 = (((struct o20_short *)(a4))->v);
        (((struct o22_ushort *)(a4))->v) = (*(signed char *)(((((t0 << 1) + t0) + 0xC2A2790) + 0x0)));
        t0 = (((struct o20_short *)(a4))->v);
        return FUN_0c037498(((((struct oC4_int *)(a4))->v)), (*(signed char *)(((((t0 << 1) + t0) + 0xC2A2790) + 0x1))), 0x1A, (*(int *)0xC4B40CC));
    }
    return 0x22;
}

int FUN_0c150faa(int a4)
{
    (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
    (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
    (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
    (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) + ((((struct o58_float *)(a4))->v)));
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
    (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + ((((struct o60_float *)(a4))->v)));
    return 0x54;
}





