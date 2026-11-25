/* game/unsorted: functions 0C16E9CC-0C16EE8A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int);
int FUN_0c03f444(int, int, int);
int FUN_0c059df2(int, int);
int FUN_0c064f80(int);
int FUN_0c07e3ae(int, int);
int FUN_0c0c2ab6(int, int);
float math_cos_angle16(int);
int nlRand(void);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c187798(void);
int FUN_0c16e9cc(int a4);
int FUN_0c16ea1e(int a4);
int FUN_0c16eb2c(int a4, int a5);
int FUN_0c16ece6(int a4);

int FUN_0c16e9cc(int a4)
{
    register int t0;
    register int t1;

    t0 = *(short *)((a4 + 0x1E));
    *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        *(unsigned short *)((a4 + 0x1E)) = 0x3;
        *(unsigned short *)((a4 + 0x1C)) = (((*(short *)((a4 + 0x1C))) + 0x1) & 0x7);
        t0 = (((struct oC4_int *)(a4))->v);
        FUN_0c03744a(t0, (*(short *)((a4 + 0x1C))), 0x18, (*(int *)0xC4B40CC));
        *(unsigned char *)((t0 + 0x0)) = 0x1;
        *(unsigned short *)((t0 + 0x6)) = 0x31;
        (((struct o48_float *)(a4))->v) = 1.0f;
        (((struct o44_float *)(a4))->v) = 1.0f;
        (((struct o40_float *)(a4))->v) = 1.0f;
        t1 = 0x40;
    }
    return t1;
}

int FUN_0c16ea1e(int a4)
{
    register int t0;
    register int t1;
    register float u0;

    FUN_0c16e9cc(a4);
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            u0 = (((struct o40_float *)(a4))->v);
            (((struct o40_float *)(a4))->v) = (u0 * 0.899999976f);
            (((struct o48_float *)(a4))->v) = (u0 * 0.899999976f);
            (((struct o44_float *)(a4))->v) = (u0 * 0.899999976f);
            (((struct oB4_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) * 0.800000012f);
            u0 = (((struct oB4_float *)(a4))->v);
            (((struct oBC_float *)(a4))->v) = u0;
            (((struct oB8_float *)(a4))->v) = u0;
            t0 = (((struct o20_short *)(a4))->v);
            (((struct o20_ushort *)(a4))->v) = (t0 - 1);
            if ((int)(short)(t0 - 1) <= 0) {
                return FUN_0c03f346(a4);
            }
            return 0x20;
        }
        t0 = (((struct o20_short *)(a4))->v);
        (((struct o20_ushort *)(a4))->v) = (t0 - 1);
        t1 = 0x20;
        if ((int)(short)(t0 - 1) <= 0) {
            (((struct o20_ushort *)(a4))->v) = 0xA;
            (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x200);
            (((struct oBC_float *)(a4))->v) = 1.0f;
            (((struct oB8_float *)(a4))->v) = 1.0f;
            (((struct oB4_float *)(a4))->v) = 1.0f;
            (((struct o12A_ushort *)(a4))->v) = 0x0;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t1 = 0x14;
        }
        return t1;
    }
    t0 = (((struct o20_short *)(a4))->v);
    (((struct o20_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        (((struct o20_ushort *)(a4))->v) = 0x28;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t0 = FUN_0c064f80(a4);
    if (t0 != 0) {
        (((struct o50_float *)(a4))->v) = 0.0f;
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    return math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
}


int FUN_0c16ece6(int a4)
{
    register int t0;
    register int t10;
    register int t7;
    register float u9;

    t0 = FUN_0c03f444(0x1, 0x0, 0x1);
    t10 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC16EC20;
        (((struct o28_float *)(t0))->v) = ((((struct o28_float *)(a4))->v));
        (((struct o30_float *)(t0))->v) = ((((struct o30_float *)(a4))->v));
        (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o28_float *)0xC16EDB0)->v)));
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x3C)) = 0x0;
        *(unsigned int *)((t0 + 0x38)) = 0x0;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        *(unsigned short *)((t0 + 0x1C)) = 0x1E;
        t7 = (((struct oC4_int *)(t0))->v);
        FUN_0c03744a(t7, 0x1, 0x54, (*(int *)0xC4B40CC));
        *(unsigned char *)((t7 + 0x0)) = 0x1;
        *(unsigned short *)((t7 + 0x6)) = 0x21F;
        u9 = (((struct o0_float *)0xC16EDB0)->v);
        (((struct o8C_float *)(t7))->v) = u9;
        (((struct o88_float *)(t7))->v) = u9;
        (((struct o84_float *)(t7))->v) = u9;
        (((struct o20_float *)(t7))->v) = 1.0f;
        (((struct o1C_float *)(t7))->v) = 1.0f;
        (((struct o18_float *)(t7))->v) = 1.0f;
        t10 = 0x18;
    }
    return t10;
}
