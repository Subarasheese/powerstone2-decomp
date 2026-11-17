/* game/effect: functions 0C13E268-0C13E4F4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e2f4(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c187798(void);
int FUN_0c13e268(int a4, int a5);
int FUN_0c13e35a(int a4);
int FUN_0c13e3d8(int a4, int a5, int a6, int a7, float f4);

int FUN_0c13e268(int a4, int a5)
{
    int stk[5];
    register int t0;
    register int t24;
    register float u5;
    register int t13;

    *(unsigned char *)(((int)stk + 16)) = a5;
    t0 = FUN_0c03f444(0x1, 0x0, 0x1);
    t24 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC13E3D8;
        FUN_0c187798();
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 16)));
        FUN_0c187798();
        u5 = *(float *)0xC13E3BC;
        (((struct o48_float *)(t0))->v) = u5;
        (((struct o44_float *)(t0))->v) = u5;
        (((struct o40_float *)(t0))->v) = u5;
        (((struct oA8_uchar *)(t0))->v) = 0x0;
        (((struct oAC_ushort *)(t0))->v) = 0x231;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        (((struct oBC_float *)(t0))->v) = 1.0f;
        (((struct oB8_float *)(t0))->v) = 1.0f;
        (((struct oB4_float *)(t0))->v) = 1.0f;
        FUN_0c037498(((((struct oC4_int *)(t0))->v)), 0x0, 0x4, (*(int *)((((*(signed char *)((t0 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0xF;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        if ((*(signed char *)(((int)stk + 16))) != 0) {
            *(int *)((int)stk + 12) = 0xF0;
            *(int *)((int)stk + 8) = 0x0;
            t13 = *(signed char *)((t0 + 0x1));
            *(int *)((int)stk + 4) = (~((int)0x1 << (int)t13));
            *(int *)((int)stk + 0) = 0x100;
            FUN_0c064d24(t0, 0x1, 0x32, 0x2, 0x100, (~((int)0x1 << (int)t13)), 0x0, 0xF0);
            FUN_0c07e2f4(t0, 0x63);
        }
        t24 = thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((t0 + 0x1))) * (short)0x3938) + 0xC53256C))) + 0x28), (t0 + 0x28));
        *(unsigned int *)((t0 + 0x10)) = a4;
    }
    return t24;
}

int FUN_0c13e35a(int a4)
{
    register int t0;

    t0 = (((struct o20_short *)(a4))->v);
    (((struct o20_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) < 0) {
        (((struct o20_ushort *)(a4))->v) = 0x4;
        t0 = (((struct o22_short *)(a4))->v);
        (((struct o22_ushort *)(a4))->v) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) > (int)0x5) {
            (((struct o22_ushort *)(a4))->v) = 0x0;
        }
        return FUN_0c037498(((((struct oC4_int *)(a4))->v)), ((((struct o22_short *)(a4))->v)), 0x4, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    }
    return 0x20;
}

int FUN_0c13e3d8(int a4, int a5, int a6, int a7, float f4)
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
        (((struct o15_uchar *)(a4))->v) = 0x0;
        *(unsigned short *)((a4 + 0x1C)) = 0x10;
        t0 = *(int *)((a4 + 0x38));
        (((struct o4C_float *)(a4))->v) = ((math_sin_angle16(t0)) * 32.0f);
        (((struct o54_float *)(a4))->v) = ((math_cos_angle16(t0)) * 32.0f);
        (((struct o50_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) / -32.0f);
        (((struct o60_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) / -32.0f);
        (((struct o5C_float *)(a4))->v) = 0.100000001f;
    }
    if ((*(signed char *)((a4 + 0x15))) == 0) {
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        }
        u0 = (((struct o48_float *)(a4))->v);
        (((struct o48_float *)(a4))->v) = (u0 + 0.00999999978f);
        if (!(1.0f > (u0 + 0.00999999978f))) {
            (((struct o48_float *)(a4))->v) = 1.0f;
        }
        u0 = (((struct o48_float *)(a4))->v);
        (((struct o44_float *)(a4))->v) = u0;
        (((struct o40_float *)(a4))->v) = u0;
    } else {
        (((struct oB4_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) - 0.100000001f);
        u0 = (((struct oB4_float *)(a4))->v);
        (((struct oBC_float *)(a4))->v) = u0;
        (((struct oB8_float *)(a4))->v) = u0;
        if (!(((((struct oB4_float *)(a4))->v)) > 0.0f)) {
            (((struct oBC_float *)(a4))->v) = 0.0f;
            (((struct oB8_float *)(a4))->v) = 0.0f;
            (((struct oB4_float *)(a4))->v) = 0.0f;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        }
    }
    FUN_0c13e35a(a4);
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}
