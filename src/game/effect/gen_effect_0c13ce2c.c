/* game/effect: functions 0C13CE2C-0C13D036, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
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
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oD4_int { char p[0xD4]; int v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int math_mat_transform_vector(int, int);
int thunk_FUN_0c058310(int, int);
int math_vec3_accumulate(int, int);
int FUN_0c13ce2c(int a4);
int FUN_0c13cef0(int a4);
int FUN_0c13cf38(int a4, int a5, int a6, int a7, float f4);

int FUN_0c13ce2c(int a4)
{
    register int t0;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    if (t0 != 0) {
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x231;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        (((struct oBC_float *)(t0))->v) = 1.0f;
        (((struct oB8_float *)(t0))->v) = 1.0f;
        (((struct oB4_float *)(t0))->v) = 1.0f;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC13CF38;
        *(unsigned int *)((t0 + 0x10)) = a4;
        *(unsigned short *)((t0 + 0x1E)) = (*(signed char *)((a4 + 0x3715)));
        FUN_0c037498(((((struct oC4_int *)(t0))->v)), 0x0, 0x4, (*(int *)((((*(signed char *)((t0 + 0x1))) << 2) + 0xC4B40FC))));
        *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0xF;
        *(unsigned int *)((t0 + 0x10)) = a4;
        (((struct o48_float *)(t0))->v) = 0.0f;
        (((struct o44_float *)(t0))->v) = 0.0f;
        (((struct o40_float *)(t0))->v) = 0.0f;
        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC53256C))) + 0x28), (t0 + 0x28));
        (((struct o50_float *)(t0))->v) = 0.0f;
        (((struct o4C_float *)(t0))->v) = 0.0f;
        (((struct o54_float *)(t0))->v) = (*(float *)0xC13CF88);
        return math_mat_transform_vector((t0 + 0x4C), (((((struct oD4_int *)(a4))->v)) + 0x28));
    }
    return t0;
}

int FUN_0c13cef0(int a4)
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

int FUN_0c13cf38(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register float u0;

    if ((*(signed char *)(((*(int *)((a4 + 0x10))) + 0x3715))) != (*(short *)((a4 + 0x1E)))) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x5;
    }
    if ((*(signed char *)((a4 + 0x15))) == 0) {
        u0 = (((struct o48_float *)(a4))->v);
        (((struct o48_float *)(a4))->v) = (u0 + 0.0500000007f);
        if (!(1.0f > (u0 + 0.0500000007f))) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
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
    FUN_0c13cef0(a4);
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}
