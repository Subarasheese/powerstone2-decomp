/* game/unsorted: functions 0C124F0C-0C1254D4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o378C_float { char p[0x378C]; float v; };
struct o3818_short { char p[0x3818]; short v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03f346(int, int, int, int);
float math_sin_angle16(int);
int FUN_0c17c4d0(int);
int FUN_0c187798(int, int, int);
int FUN_0c124f0c(int a4, int a5, int a6, int a7);
int FUN_0c1250a8(int a4, int a5, int a6, int a7);
int FUN_0c12512e(int a4, int a5, int a6, int a7);
int FUN_0c1251ce(int a4, int a5, int a6, int a7);

int FUN_0c124f0c(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t10;
    register int t12;
    register float u16;
    register int t17;
    register float u28;
    register int t29;
    register float u67;
    register float u68;
    register float u72;
    register float u73;
    register float u77;
    register float u78;
    register int t79;
    register int t80;
    register float t82;
    register float u83;
    register float u84;
    int t2;
    register int t85;

    t0 = *(int *)((a4 + 0x10));
    t10 = a4;
    if (((*(signed char *)((t0 + 0x3715))) == 26) && (t2 = (((struct o3818_short *)(t0))->v), (unsigned short)t2 == 0x43D)) {
    } else {
        if ((int)(*(signed char *)((a4 + 0x14))) < (int)0x3) {
            (((struct o14_uchar *)(a4))->v) = 0x3;
        }
        t10 = 0x3;
    }
    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
    t12 = *(signed char *)((a4 + 0x14));
    if (t12 != 0) {
        if (t12 == 3) {
            (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x200);
            (((struct oBC_float *)(a4))->v) = 1.0f;
            (((struct oB8_float *)(a4))->v) = 1.0f;
            (((struct oB4_float *)(a4))->v) = 1.0f;
            *(unsigned short *)((a4 + 0x1C)) = 0x8;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct oB4_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) * 0.800000012f);
            u16 = (((struct oB4_float *)(a4))->v);
            (((struct oBC_float *)(a4))->v) = u16;
            (((struct oB8_float *)(a4))->v) = u16;
            t17 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t17 - 1);
            t85 = (short)(t17 - 1);
            if ((int)(short)(t17 - 1) <= 0) {
                t85 = (FUN_0c03f346(a4, a5, a6, a7));
            }
        } else {
            t85 = t12;
            if (t12 == 4) {
                (((struct oB4_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) * 0.800000012f);
                u28 = (((struct oB4_float *)(a4))->v);
                (((struct oBC_float *)(a4))->v) = u28;
                (((struct oB8_float *)(a4))->v) = u28;
                t29 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t29 - 1);
                t85 = (short)(t29 - 1);
                if ((int)(short)(t29 - 1) <= 0) {
                    t85 = (FUN_0c03f346(a4, a5, a6, a7));
                }
            }
        }
    } else {
        *(volatile signed char *)((t0 + 0x1));
        FUN_0c187798(t10, a5, a6);
        *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) - ((((struct o28_float *)(t0))->v)));
        *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) - ((((struct o2C_float *)(t0))->v)));
        *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) - ((((struct o30_float *)(t0))->v)));
        FUN_0c17c4d0(((int)stk + 0));
        u67 = ((*(float *)(((int)stk + 0))) * ((((struct o378C_float *)(t0))->v)));
        u68 = ((((struct o28_float *)(t0))->v));
        u68 = u68 + 150.0f * u67;
        (((struct o28_float *)(a4))->v) = u68;
        u72 = ((*(float *)(((int)stk + 8))) * ((((struct o378C_float *)(t0))->v)));
        u73 = ((((struct o30_float *)(t0))->v));
        u73 = u73 + 150.0f * u72;
        (((struct o30_float *)(a4))->v) = u73;
        u77 = ((*(float *)(((int)stk + 4))) * ((((struct o378C_float *)(t0))->v)));
        u78 = ((((struct o2C_float *)(t0))->v));
        u78 = u78 + 150.0f * u77;
        (((struct o2C_float *)(a4))->v) = u78;
        t79 = (((struct oC4_int *)(a4))->v);
        t80 = *(short *)((a4 + 0x1E));
        t82 = math_sin_angle16((int)(((float)((((t80 << 2) + t80) << 2) << 1) * 65536.0f) / 360.0f));
        u83 = 1.29999995f;
        u83 = u83 + 0.400000006f * t82;
        (((struct o84_float *)(t79))->v) = u83;
        u84 = (((struct o84_float *)(t79))->v);
        (((struct o8C_float *)(t79))->v) = u84;
        (((struct o88_float *)(t79))->v) = u84;
        t85 = 0x88;
    }
    return t85;
}

int FUN_0c1250a8(int a4, int a5, int a6, int a7)
{
    register int t0;
    register float u0;

    u0 = (((struct o40_float *)(a4))->v);
    (((struct o40_float *)(a4))->v) = (u0 + 0.0352941193f);
    (((struct o48_float *)(a4))->v) = (u0 + 0.0352941193f);
    (((struct o44_float *)(a4))->v) = (u0 + 0.0352941193f);
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        (((struct oB4_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) * 0.800000012f);
        u0 = (((struct oB4_float *)(a4))->v);
        (((struct oBC_float *)(a4))->v) = u0;
        (((struct oB8_float *)(a4))->v) = u0;
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        return (short)(t0 - 1);
    }
    t0 = 0x40;
    if (((((struct o40_float *)(a4))->v)) > (*(float *)0xC125198)) {
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x200);
        (((struct oBC_float *)(a4))->v) = 1.0f;
        (((struct oB8_float *)(a4))->v) = 1.0f;
        (((struct oB4_float *)(a4))->v) = 1.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0x8;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t0 = 0x14;
    }
    return t0;
}

int FUN_0c12512e(int a4, int a5, int a6, int a7)
{
    register int t0;
    register float u0;

    u0 = (((struct o40_float *)(a4))->v);
    (((struct o40_float *)(a4))->v) = (u0 + 0.0240000002f);
    (((struct o48_float *)(a4))->v) = (u0 + 0.0240000002f);
    (((struct o44_float *)(a4))->v) = (u0 + 0.0240000002f);
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        (((struct oB4_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) * 0.800000012f);
        u0 = (((struct oB4_float *)(a4))->v);
        (((struct oBC_float *)(a4))->v) = u0;
        (((struct oB8_float *)(a4))->v) = u0;
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        return (short)(t0 - 1);
    }
    t0 = 0x40;
    if (((((struct o40_float *)(a4))->v)) > 1.10000002f) {
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x200);
        (((struct oBC_float *)(a4))->v) = 1.0f;
        (((struct oB8_float *)(a4))->v) = 1.0f;
        (((struct oB4_float *)(a4))->v) = 1.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0x8;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t0 = 0x14;
    }
    return t0;
}

int FUN_0c1251ce(int a4, int a5, int a6, int a7)
{
    register int t0;
    register float u0;

    u0 = (((struct o40_float *)(a4))->v);
    (((struct o40_float *)(a4))->v) = (u0 + 0.0233333334f);
    (((struct o48_float *)(a4))->v) = (u0 + 0.0233333334f);
    (((struct o44_float *)(a4))->v) = (u0 + 0.0233333334f);
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        (((struct oB4_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) * 0.800000012f);
        u0 = (((struct oB4_float *)(a4))->v);
        (((struct oBC_float *)(a4))->v) = u0;
        (((struct oB8_float *)(a4))->v) = u0;
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        return (short)(t0 - 1);
    }
    t0 = 0x40;
    if (((((struct o40_float *)(a4))->v)) > (*(float *)0xC1252AC)) {
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x200);
        (((struct oBC_float *)(a4))->v) = 1.0f;
        (((struct oB8_float *)(a4))->v) = 1.0f;
        (((struct oB4_float *)(a4))->v) = 1.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0x8;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t0 = 0x14;
    }
    return t0;
}
